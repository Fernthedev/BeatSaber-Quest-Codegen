#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserCapability)
// Forward declare root types
namespace Oculus::Platform::Models {
class UserCapability;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::UserCapability);
// Type: Oculus.Platform.Models::UserCapability
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13487))
// CS Name: ::Oculus.Platform.Models::UserCapability*
class CORDL_TYPE UserCapability : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field Description offset 0x10
 __declspec(property(get=__get_Description, put=__set_Description)) ::StringW  Description;

/// @brief Field IsEnabled offset 0x18
 __declspec(property(get=__get_IsEnabled, put=__set_IsEnabled)) bool  IsEnabled;

/// @brief Field Name offset 0x20
 __declspec(property(get=__get_Name, put=__set_Name)) ::StringW  Name;

/// @brief Field ReasonCode offset 0x28
 __declspec(property(get=__get_ReasonCode, put=__set_ReasonCode)) ::StringW  ReasonCode;

constexpr void __set_Description(::StringW  value) ;

constexpr ::StringW& __get_Description() ;

constexpr ::StringW const& __get_Description() const;

constexpr void __set_IsEnabled(bool  value) ;

constexpr bool& __get_IsEnabled() ;

constexpr bool const& __get_IsEnabled() const;

constexpr void __set_Name(::StringW  value) ;

constexpr ::StringW& __get_Name() ;

constexpr ::StringW const& __get_Name() const;

constexpr void __set_ReasonCode(::StringW  value) ;

constexpr ::StringW& __get_ReasonCode() ;

constexpr ::StringW const& __get_ReasonCode() const;

static inline ::Oculus::Platform::Models::UserCapability* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2709038 size 0xac virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "UserCapability", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserCapability(UserCapability && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserCapability", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserCapability(UserCapability const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UserCapability()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::UserCapability, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::UserCapability);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::UserCapability*, "Oculus.Platform.Models", "UserCapability");
