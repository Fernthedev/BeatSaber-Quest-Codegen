#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserAccountAgeCategory)
namespace Oculus::Platform {
struct AccountAgeCategory;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class UserAccountAgeCategory;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::UserAccountAgeCategory);
// Type: Oculus.Platform.Models::UserAccountAgeCategory
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13486))
// CS Name: ::Oculus.Platform.Models::UserAccountAgeCategory*
class CORDL_TYPE UserAccountAgeCategory : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field AgeCategory offset 0x10
 __declspec(property(get=__get_AgeCategory, put=__set_AgeCategory)) ::Oculus::Platform::AccountAgeCategory  AgeCategory;

constexpr void __set_AgeCategory(::Oculus::Platform::AccountAgeCategory  value) ;

constexpr ::Oculus::Platform::AccountAgeCategory& __get_AgeCategory() ;

constexpr ::Oculus::Platform::AccountAgeCategory const& __get_AgeCategory() const;

static inline ::Oculus::Platform::Models::UserAccountAgeCategory* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2708fc0 size 0x78 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "UserAccountAgeCategory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserAccountAgeCategory(UserAccountAgeCategory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserAccountAgeCategory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserAccountAgeCategory(UserAccountAgeCategory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UserAccountAgeCategory()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::UserAccountAgeCategory, 0x18>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::UserAccountAgeCategory);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::UserAccountAgeCategory*, "Oculus.Platform.Models", "UserAccountAgeCategory");
