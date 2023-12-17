#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BasicConnectionRequestHandler)
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
class IConnectionRequestHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicConnectionRequestHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BasicConnectionRequestHandler);
// Type: ::BasicConnectionRequestHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12683))
// CS Name: ::BasicConnectionRequestHandler*
class CORDL_TYPE BasicConnectionRequestHandler : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field <secret>k__BackingField offset 0x10
 __declspec(property(get=__get__secret_k__BackingField, put=__set__secret_k__BackingField)) ::StringW  _secret_k__BackingField;

 __declspec(property(get=get_secret, put=set_secret)) ::StringW  secret;

/// @brief Convert operator to "::GlobalNamespace::IConnectionRequestHandler"
constexpr operator  ::GlobalNamespace::IConnectionRequestHandler*() noexcept;

constexpr void __set__secret_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__secret_k__BackingField() ;

constexpr ::StringW const& __get__secret_k__BackingField() const;

/// @brief Method get_secret addr 0xe29860 size 0x8 virtual false final false
inline ::StringW get_secret() ;

/// @brief Method set_secret addr 0xe29868 size 0x8 virtual false final false
inline void set_secret(::StringW  value) ;

/// @brief Method GetConnectionMessage addr 0xe29870 size 0x70 virtual true final true
inline void GetConnectionMessage(::LiteNetLib::Utils::NetDataWriter*  writer, ::StringW  userId, ::StringW  userName, bool  isConnectionOwner) ;

/// @brief Method ValidateConnectionMessage addr 0xe298e0 size 0xbc virtual true final true
inline bool ValidateConnectionMessage(::LiteNetLib::Utils::NetDataReader*  reader, ByRef<::StringW>  userId, ByRef<::StringW>  userName, ByRef<bool>  isConnectionOwner) ;

static inline ::GlobalNamespace::BasicConnectionRequestHandler* New_ctor() ;

/// @brief Method .ctor addr 0xe2999c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BasicConnectionRequestHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicConnectionRequestHandler(BasicConnectionRequestHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicConnectionRequestHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicConnectionRequestHandler(BasicConnectionRequestHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BasicConnectionRequestHandler()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasicConnectionRequestHandler, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BasicConnectionRequestHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicConnectionRequestHandler*, "", "BasicConnectionRequestHandler");
