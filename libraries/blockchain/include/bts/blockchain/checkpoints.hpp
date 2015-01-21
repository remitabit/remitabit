#pragma once
#include <bts/blockchain/types.hpp>
#include <map>

static std::map<uint32_t, bts::blockchain::block_id_type> CHECKPOINT_BLOCKS
{
    {       1, bts::blockchain::block_id_type( "8523e28fde6eed4eb749a84e28c9c7b56870c9cc" ) },
    {  129000, bts::blockchain::block_id_type( "548615aa63d53de3cb3980046c1f0843ae271ab3" ) }
};
