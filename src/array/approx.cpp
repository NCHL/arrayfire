#include <af/array.h>
#include <af/data.h>
#include "error.hpp"

namespace af
{
    array approx1(const array& in, const array &pos, const af_interp_type method, const float offGrid)
    {
        af_array out = 0;
        AF_THROW(af_approx1(&out, in.get(), pos.get(), method, offGrid));
        return array(out);
    }

    array approx2(const array& in, const array &pos0, const array &pos1,
                  const af_interp_type method, const float offGrid)
    {
        af_array out = 0;
        AF_THROW(af_approx2(&out, in.get(), pos0.get(), pos1.get(), method, offGrid));
        return array(out);
    }
}