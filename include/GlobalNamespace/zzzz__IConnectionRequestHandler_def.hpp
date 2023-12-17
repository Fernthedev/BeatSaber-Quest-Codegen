#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IConnectionRequestHandler)
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
class IConnectionRequestHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IConnectionRequestHandler);
// Type: ::IConnectionRequestHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12783))
// CS Name: ::IConnectionRequestHandler*
class CORDL_TYPE IConnectionRequestHandler {
public:
// Declarations
/// @brief Method GetConnectionMessage addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetConnectionMessage(::LiteNetLib::Utils::NetDataWriter*  writer, ::StringW  userId, ::StringW  userName, bool  isConnectionOwner) ;

/// @brief Method ValidateConnectionMessage addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool ValidateConnectionMessage(::LiteNetLib::Utils::NetDataReader*  reader, ByRef<::StringW>  userId, ByRef<::StringW>  userName, ByRef<bool>  isConnectionOwner) ;

// Ctor Parameters [CppParam { name: "", ty: "IConnectionRequestHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IConnectionRequestHandler(IConnectionRequestHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IConnectionRequestHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IConnectionRequestHandler(IConnectionRequestHandler const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IConnectionRequestHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IConnectionRequestHandler*, "", "IConnectionRequestHandler");
