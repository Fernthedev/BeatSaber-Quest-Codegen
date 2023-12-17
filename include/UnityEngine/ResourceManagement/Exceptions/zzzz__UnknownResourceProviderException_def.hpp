#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__ResourceManagerException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnknownResourceProviderException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Exceptions {
class UnknownResourceProviderException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException);
// Type: UnityEngine.ResourceManagement.Exceptions::UnknownResourceProviderException
namespace UnityEngine::ResourceManagement::Exceptions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13961))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13962))
// CS Name: ::UnityEngine.ResourceManagement.Exceptions::UnknownResourceProviderException*
class CORDL_TYPE UnknownResourceProviderException : public ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException)]{};

/// @brief Field <Location>k__BackingField offset 0x90
 __declspec(property(get=__get__Location_k__BackingField, put=__set__Location_k__BackingField)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  _Location_k__BackingField;

 __declspec(property(get=get_Location, put=set_Location)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  Location;

 __declspec(property(get=get_Message)) ::StringW  Message;

constexpr void __set__Location_k__BackingField(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* __get__Location_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> __get__Location_k__BackingField() const;

/// @brief Method get_Location addr 0x2bcfe58 size 0x8 virtual false final false
inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_Location() ;

/// @brief Method set_Location addr 0x2bcfe60 size 0x8 virtual false final false
inline void set_Location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  value) ;

static inline ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException* New_ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location) ;

/// @brief Method .ctor addr 0x2bcbbdc size 0x24 virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location) ;

static inline ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException* New_ctor() ;

/// @brief Method .ctor addr 0x2bcfe68 size 0x4 virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x2bcfe6c size 0x4 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor addr 0x2bcfe70 size 0x4 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

static inline ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  message, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x2bcfe74 size 0x4 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  message, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_Message addr 0x2bcfe78 size 0x214 virtual true final false
inline ::StringW get_Message() ;

/// @brief Method ToString addr 0x2bd008c size 0xc virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "UnknownResourceProviderException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnknownResourceProviderException(UnknownResourceProviderException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnknownResourceProviderException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnknownResourceProviderException(UnknownResourceProviderException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnknownResourceProviderException()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException, 0x98>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::Exceptions
NEED_NO_BOX(::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*, "UnityEngine.ResourceManagement.Exceptions", "UnknownResourceProviderException");
