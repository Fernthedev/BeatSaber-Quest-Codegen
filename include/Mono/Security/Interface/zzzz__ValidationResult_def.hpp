#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValidationResult)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Mono::Security::Interface {
struct MonoSslPolicyErrors;
}
// Forward declare root types
namespace Mono::Security::Interface {
class ValidationResult;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Interface::ValidationResult);
// Type: Mono.Security.Interface::ValidationResult
namespace Mono::Security::Interface {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13775))
// CS Name: ::Mono.Security.Interface::ValidationResult*
class CORDL_TYPE ValidationResult : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field trusted offset 0x10
 __declspec(property(get=__get_trusted, put=__set_trusted)) bool  trusted;

/// @brief Field user_denied offset 0x11
 __declspec(property(get=__get_user_denied, put=__set_user_denied)) bool  user_denied;

/// @brief Field error_code offset 0x14
 __declspec(property(get=__get_error_code, put=__set_error_code)) int32_t  error_code;

/// @brief Field policy_errors offset 0x18
 __declspec(property(get=__get_policy_errors, put=__set_policy_errors)) ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>  policy_errors;

 __declspec(property(get=get_Trusted)) bool  Trusted;

 __declspec(property(get=get_UserDenied)) bool  UserDenied;

constexpr void __set_trusted(bool  value) ;

constexpr bool& __get_trusted() ;

constexpr bool const& __get_trusted() const;

constexpr void __set_user_denied(bool  value) ;

constexpr bool& __get_user_denied() ;

constexpr bool const& __get_user_denied() const;

constexpr void __set_error_code(int32_t  value) ;

constexpr int32_t& __get_error_code() ;

constexpr int32_t const& __get_error_code() const;

constexpr void __set_policy_errors(::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>  value) ;

constexpr ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>& __get_policy_errors() ;

constexpr ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> const& __get_policy_errors() const;

static inline ::Mono::Security::Interface::ValidationResult* New_ctor(bool  trusted, bool  user_denied, int32_t  error_code, ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>  policy_errors) ;

/// @brief Method .ctor addr 0x2402a68 size 0x48 virtual false final false
inline void _ctor(bool  trusted, bool  user_denied, int32_t  error_code, ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>  policy_errors) ;

/// @brief Method get_Trusted addr 0x2402ab0 size 0x8 virtual false final false
inline bool get_Trusted() ;

/// @brief Method get_UserDenied addr 0x2402ab8 size 0x8 virtual false final false
inline bool get_UserDenied() ;

// Ctor Parameters [CppParam { name: "", ty: "ValidationResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValidationResult(ValidationResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValidationResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValidationResult(ValidationResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ValidationResult()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::ValidationResult, 0x20>, "Size mismatch!");

} // namespace end def Mono::Security::Interface
NEED_NO_BOX(::Mono::Security::Interface::ValidationResult);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::ValidationResult*, "Mono.Security.Interface", "ValidationResult");
