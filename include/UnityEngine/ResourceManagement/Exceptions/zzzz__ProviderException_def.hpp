#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__OperationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProviderException)
namespace System {
class Exception;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Exceptions {
class ProviderException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Exceptions::ProviderException);
// Type: UnityEngine.ResourceManagement.Exceptions::ProviderException
namespace UnityEngine::ResourceManagement::Exceptions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13963))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13964))
// CS Name: ::UnityEngine.ResourceManagement.Exceptions::ProviderException*
class CORDL_TYPE ProviderException : public ::UnityEngine::ResourceManagement::Exceptions::OperationException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::UnityEngine::ResourceManagement::Exceptions::OperationException)]{};

/// @brief Field <Location>k__BackingField offset 0x90
 __declspec(property(get=__get__Location_k__BackingField, put=__set__Location_k__BackingField)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  _Location_k__BackingField;

 __declspec(property(get=get_Location)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  Location;

constexpr void __set__Location_k__BackingField(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* __get__Location_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> __get__Location_k__BackingField() const;

static inline ::UnityEngine::ResourceManagement::Exceptions::ProviderException* New_ctor(::StringW  message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::System::Exception*  innerException) ;

/// @brief Method .ctor addr 0x2bd0190 size 0x28 virtual false final false
inline void _ctor(::StringW  message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::System::Exception*  innerException) ;

/// @brief Method get_Location addr 0x2bd01b8 size 0x8 virtual false final false
inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_Location() ;

// Ctor Parameters [CppParam { name: "", ty: "ProviderException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProviderException(ProviderException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProviderException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProviderException(ProviderException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ProviderException()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Exceptions::ProviderException, 0x98>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::Exceptions
NEED_NO_BOX(::UnityEngine::ResourceManagement::Exceptions::ProviderException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Exceptions::ProviderException*, "UnityEngine.ResourceManagement.Exceptions", "ProviderException");
