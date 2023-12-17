#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AchievementSO)
// Forward declare root types
namespace GlobalNamespace {
class AchievementSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AchievementSO);
// Type: ::AchievementSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4089))
// CS Name: ::AchievementSO*
class CORDL_TYPE AchievementSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _achievementId offset 0x18
 __declspec(property(get=__get__achievementId, put=__set__achievementId)) ::StringW  _achievementId;

 __declspec(property(get=get_achievementId)) ::StringW  achievementId;

constexpr void __set__achievementId(::StringW  value) ;

constexpr ::StringW& __get__achievementId() ;

constexpr ::StringW const& __get__achievementId() const;

/// @brief Method get_achievementId addr 0x2233204 size 0x8 virtual false final false
inline ::StringW get_achievementId() ;

static inline ::GlobalNamespace::AchievementSO* New_ctor() ;

/// @brief Method .ctor addr 0x223320c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AchievementSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AchievementSO(AchievementSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AchievementSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AchievementSO(AchievementSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AchievementSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AchievementSO, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AchievementSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AchievementSO*, "", "AchievementSO");
