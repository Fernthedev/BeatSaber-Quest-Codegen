#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AchievementUpdate)
// Forward declare root types
namespace Oculus::Platform::Models {
class AchievementUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AchievementUpdate);
// Type: Oculus.Platform.Models::AchievementUpdate
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13411))
// CS Name: ::Oculus.Platform.Models::AchievementUpdate*
class CORDL_TYPE AchievementUpdate : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field JustUnlocked offset 0x10
 __declspec(property(get=__get_JustUnlocked, put=__set_JustUnlocked)) bool  JustUnlocked;

/// @brief Field Name offset 0x18
 __declspec(property(get=__get_Name, put=__set_Name)) ::StringW  Name;

constexpr void __set_JustUnlocked(bool  value) ;

constexpr bool& __get_JustUnlocked() ;

constexpr bool const& __get_JustUnlocked() const;

constexpr void __set_Name(::StringW  value) ;

constexpr ::StringW& __get_Name() ;

constexpr ::StringW const& __get_Name() const;

static inline ::Oculus::Platform::Models::AchievementUpdate* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2703d5c size 0x8c virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "AchievementUpdate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AchievementUpdate(AchievementUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AchievementUpdate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AchievementUpdate(AchievementUpdate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AchievementUpdate()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AchievementUpdate, 0x20>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AchievementUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AchievementUpdate*, "Oculus.Platform.Models", "AchievementUpdate");
