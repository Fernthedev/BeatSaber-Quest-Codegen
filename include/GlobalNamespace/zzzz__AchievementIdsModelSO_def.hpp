#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(AchievementIdsModelSO)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class AchievementSO;
}
// Forward declare root types
namespace GlobalNamespace {
class AchievementIdsModelSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AchievementIdsModelSO);
// Type: ::AchievementIdsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4085))
// CS Name: ::AchievementIdsModelSO*
class CORDL_TYPE AchievementIdsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _achievementsIds offset 0x18
 __declspec(property(get=__get__achievementsIds, put=__set__achievementsIds)) ::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO*>*  _achievementsIds;

 __declspec(property(get=get_achievementsIds)) ::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO*>*  achievementsIds;

constexpr void __set__achievementsIds(::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO*>* __get__achievementsIds() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO*>*> __get__achievementsIds() const;

/// @brief Method get_achievementsIds addr 0x2231ac4 size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO*>* get_achievementsIds() ;

static inline ::GlobalNamespace::AchievementIdsModelSO* New_ctor() ;

/// @brief Method .ctor addr 0x2231acc size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AchievementIdsModelSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AchievementIdsModelSO(AchievementIdsModelSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AchievementIdsModelSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AchievementIdsModelSO(AchievementIdsModelSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AchievementIdsModelSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AchievementIdsModelSO, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AchievementIdsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AchievementIdsModelSO*, "", "AchievementIdsModelSO");
