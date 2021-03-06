#pragma once
#include "icoloursegmenter.h"

/* A series of classes implementing the IColourSegmenter interface. */

namespace anima
{
    namespace alg
    {
        namespace primatte
        {
            /** This class segments colours according to distance,
              * cutting off the points that are too far away. */
            class DistanceColourSegmenter : public IColourSegmenter
            {
            public:
                virtual SegmenterResult segment(const std::vector<math::vec3>& points,
                                                   const math::vec3 reference,
                                                   float approximateRadius) const;
            };

//            class DistanceColourSegmenter : public IColourSegmenter
//            {
//                virtual std::pair<std::vector<math::vec3>,std::vector<math::vec3> >
//                    segment(const std::vector<math::vec3>& points,
//                                                   const math::vec3 background,
//                                                   float approximateRadius) const;
//            };
        }
    }
}
