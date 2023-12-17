#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerBadgesModelSO)
namespace GlobalNamespace {
class MultiplayerBadgeDataSO;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgesModelSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgesModelSO);
// Type: ::MultiplayerBadgesModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5110))
// CS Name: ::MultiplayerBadgesModelSO*
class CORDL_TYPE MultiplayerBadgesModelSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::ScriptableObject)]{};

/// @brief Field _positiveBadges offset 0x18
 __declspec(property(get=__get__positiveBadges, put=__set__positiveBadges)) ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*  _positiveBadges;

/// @brief Field _negativeBadges offset 0x20
 __declspec(property(get=__get__negativeBadges, put=__set__negativeBadges)) ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*  _negativeBadges;

 __declspec(property(get=get_positiveBadges)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*  positiveBadges;

 __declspec(property(get=get_negativeBadges)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*  negativeBadges;

constexpr void __set__positiveBadges(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* __get__positiveBadges() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*> __get__positiveBadges() const;

constexpr void __set__negativeBadges(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* __get__negativeBadges() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*> __get__negativeBadges() const;

/// @brief Method get_positiveBadges addr 0x23cf914 size 0x8 virtual false final false
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* get_positiveBadges() ;

/// @brief Method get_negativeBadges addr 0x23cf91c size 0x8 virtual false final false
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* get_negativeBadges() ;

static inline ::GlobalNamespace::MultiplayerBadgesModelSO* New_ctor() ;

/// @brief Method .ctor addr 0x23cf924 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgesModelSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerBadgesModelSO(MultiplayerBadgesModelSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgesModelSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerBadgesModelSO(MultiplayerBadgesModelSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerBadgesModelSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgesModelSO, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgesModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgesModelSO*, "", "MultiplayerBadgesModelSO");
