#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__ProviderException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RemoteProviderException)
namespace System {
class Exception;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::Util {
class UnityWebRequestResult;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Exceptions {
class RemoteProviderException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException);
// Type: UnityEngine.ResourceManagement.Exceptions::RemoteProviderException
namespace UnityEngine::ResourceManagement::Exceptions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13964))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13965))
// CS Name: ::UnityEngine.ResourceManagement.Exceptions::RemoteProviderException*
class CORDL_TYPE RemoteProviderException : public ::UnityEngine::ResourceManagement::Exceptions::ProviderException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::UnityEngine::ResourceManagement::Exceptions::ProviderException)]{};

/// @brief Field <WebRequestResult>k__BackingField offset 0x98
 __declspec(property(get=__get__WebRequestResult_k__BackingField, put=__set__WebRequestResult_k__BackingField)) ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*  _WebRequestResult_k__BackingField;

 __declspec(property(get=get_Message)) ::StringW  Message;

 __declspec(property(get=get_WebRequestResult)) ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*  WebRequestResult;

constexpr void __set__WebRequestResult_k__BackingField(::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*  value) ;

constexpr ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* __get__WebRequestResult_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*> __get__WebRequestResult_k__BackingField() const;

static inline ::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException* New_ctor(::StringW  message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*  uwrResult, ::System::Exception*  innerException) ;

/// @brief Method .ctor addr 0x2bd01c0 size 0x2c virtual false final false
inline void _ctor(::StringW  message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*  uwrResult, ::System::Exception*  innerException) ;

/// @brief Method get_Message addr 0x2bd01ec size 0xc virtual true final false
inline ::StringW get_Message() ;

/// @brief Method get_WebRequestResult addr 0x2bd01f8 size 0x8 virtual false final false
inline ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* get_WebRequestResult() ;

/// @brief Method ToString addr 0x2bd0200 size 0x174 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProviderException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteProviderException(RemoteProviderException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProviderException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteProviderException(RemoteProviderException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RemoteProviderException()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException, 0xa0>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::Exceptions
NEED_NO_BOX(::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*, "UnityEngine.ResourceManagement.Exceptions", "RemoteProviderException");
