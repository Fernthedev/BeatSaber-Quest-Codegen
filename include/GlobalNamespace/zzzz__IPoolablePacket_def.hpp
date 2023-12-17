#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPoolablePacket)
// Forward declare root types
namespace GlobalNamespace {
class IPoolablePacket;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IPoolablePacket);
// Type: ::IPoolablePacket
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12806))
// CS Name: ::IPoolablePacket*
class CORDL_TYPE IPoolablePacket {
public:
// Declarations
/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Release() ;

// Ctor Parameters [CppParam { name: "", ty: "IPoolablePacket", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IPoolablePacket(IPoolablePacket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IPoolablePacket", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPoolablePacket(IPoolablePacket const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IPoolablePacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPoolablePacket*, "", "IPoolablePacket");
