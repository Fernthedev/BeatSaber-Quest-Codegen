#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Claims/zzzz__ClaimsIdentity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsIdentity)
namespace System::Security::Principal {
class IIdentity;
}
namespace System::Security::Principal {
class WindowsImpersonationContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System {
class IDisposable;
}
namespace System::Security::Principal {
struct WindowsAccountType;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Claims {
class ClaimsIdentity;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
// Forward declare root types
namespace System::Security::Principal {
class WindowsIdentity;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Principal::WindowsIdentity);
// Type: System.Security.Principal::WindowsIdentity
namespace System::Security::Principal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3010))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3006))
// CS Name: ::System.Security.Principal::WindowsIdentity*
class CORDL_TYPE WindowsIdentity : public ::System::Security::Claims::ClaimsIdentity {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::System::Security::Claims::ClaimsIdentity)]{};

/// @brief Field _token offset 0x78
 __declspec(property(get=__get__token, put=__set__token)) ::cordl_internals::intptr_t  _token;

/// @brief Field _type offset 0x80
 __declspec(property(get=__get__type, put=__set__type)) ::StringW  _type;

/// @brief Field _account offset 0x88
 __declspec(property(get=__get__account, put=__set__account)) ::System::Security::Principal::WindowsAccountType  _account;

/// @brief Field _authenticated offset 0x8c
 __declspec(property(get=__get__authenticated, put=__set__authenticated)) bool  _authenticated;

/// @brief Field _name offset 0x90
 __declspec(property(get=__get__name, put=__set__name)) ::StringW  _name;

/// @brief Field _info offset 0x98
 __declspec(property(get=__get__info, put=__set__info)) ::System::Runtime::Serialization::SerializationInfo*  _info;

 __declspec(property(get=get_AuthenticationType)) ::StringW  AuthenticationType;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Convert operator to "::System::Security::Principal::IIdentity"
constexpr operator  ::System::Security::Principal::IIdentity*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set__token(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get__token() ;

constexpr ::cordl_internals::intptr_t const& __get__token() const;

constexpr void __set__type(::StringW  value) ;

constexpr ::StringW& __get__type() ;

constexpr ::StringW const& __get__type() const;

constexpr void __set__account(::System::Security::Principal::WindowsAccountType  value) ;

constexpr ::System::Security::Principal::WindowsAccountType& __get__account() ;

constexpr ::System::Security::Principal::WindowsAccountType const& __get__account() const;

constexpr void __set__authenticated(bool  value) ;

constexpr bool& __get__authenticated() ;

constexpr bool const& __get__authenticated() const;

constexpr void __set__name(::StringW  value) ;

constexpr ::StringW& __get__name() ;

constexpr ::StringW const& __get__name() const;

constexpr void __set__info(::System::Runtime::Serialization::SerializationInfo*  value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo* __get__info() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> __get__info() const;

static inline void setStaticF_invalidWindows(::cordl_internals::intptr_t  value) ;

static inline ::cordl_internals::intptr_t getStaticF_invalidWindows() ;

static inline ::System::Security::Principal::WindowsIdentity* New_ctor(::cordl_internals::intptr_t  userToken, ::StringW  type, ::System::Security::Principal::WindowsAccountType  acctType, bool  isAuthenticated) ;

/// @brief Method .ctor addr 0x247abac size 0x64 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  userToken, ::StringW  type, ::System::Security::Principal::WindowsAccountType  acctType, bool  isAuthenticated) ;

static inline ::System::Security::Principal::WindowsIdentity* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x247ad70 size 0x3c virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::Security::Principal::WindowsIdentity* New_ctor(::System::Security::Claims::ClaimsIdentity*  claimsIdentity, ::cordl_internals::intptr_t  userToken) ;

/// @brief Method .ctor addr 0x247adac size 0xa4 virtual false final false
inline void _ctor(::System::Security::Claims::ClaimsIdentity*  claimsIdentity, ::cordl_internals::intptr_t  userToken) ;

/// @brief Method Dispose addr 0x247ae50 size 0x50 virtual true final true
inline void Dispose() ;

/// @brief Method GetCurrent addr 0x247aea0 size 0x84 virtual false final false
static inline ::System::Security::Principal::WindowsIdentity* GetCurrent() ;

/// @brief Method Impersonate addr 0x247af28 size 0x64 virtual true final false
inline ::System::Security::Principal::WindowsImpersonationContext* Impersonate() ;

/// @brief Method get_AuthenticationType addr 0x247b018 size 0x8 virtual true final true
inline ::StringW get_AuthenticationType() ;

/// @brief Method get_Name addr 0x247b020 size 0x68 virtual true final false
inline ::StringW get_Name() ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x247b08c size 0x2d8 virtual true final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x247b364 size 0x168 virtual true final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method CloneAsBase addr 0x247b4cc size 0x4 virtual false final false
inline ::System::Security::Claims::ClaimsIdentity* CloneAsBase() ;

/// @brief Method GetTokenInternal addr 0x247b620 size 0x8 virtual false final false
inline ::cordl_internals::intptr_t GetTokenInternal() ;

/// @brief Method SetToken addr 0x247ac10 size 0x160 virtual false final false
inline void SetToken(::cordl_internals::intptr_t  token) ;

/// @brief Method GetCurrentToken addr 0x247af24 size 0x4 virtual false final false
static inline ::cordl_internals::intptr_t GetCurrentToken() ;

/// @brief Method GetTokenName addr 0x247b088 size 0x4 virtual false final false
static inline ::StringW GetTokenName(::cordl_internals::intptr_t  token) ;

// Ctor Parameters [CppParam { name: "", ty: "WindowsIdentity", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WindowsIdentity(WindowsIdentity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindowsIdentity", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindowsIdentity(WindowsIdentity const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WindowsIdentity()  = default;
public:


// Fields

// Static field invalidWindows


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Principal::WindowsIdentity, 0xa0>, "Size mismatch!");

} // namespace end def System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::WindowsIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::WindowsIdentity*, "System.Security.Principal", "WindowsIdentity");
