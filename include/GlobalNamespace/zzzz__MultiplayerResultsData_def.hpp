#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiplayerResultsData)
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace GlobalNamespace {
class MultiplayerBadgesProvider;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerResultsData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerResultsData);
// Type: ::MultiplayerResultsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5242))
// CS Name: ::MultiplayerResultsData*
class CORDL_TYPE MultiplayerResultsData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _gameId offset 0x10
 __declspec(property(get=__get__gameId, put=__set__gameId)) ::StringW  _gameId;

/// @brief Field _localPlayerResultData offset 0x18
 __declspec(property(get=__get__localPlayerResultData, put=__set__localPlayerResultData)) ::GlobalNamespace::MultiplayerPlayerResultsData*  _localPlayerResultData;

/// @brief Field _otherPlayersData offset 0x20
 __declspec(property(get=__get__otherPlayersData, put=__set__otherPlayersData)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*  _otherPlayersData;

/// @brief Field _allPlayersSortedData offset 0x28
 __declspec(property(get=__get__allPlayersSortedData, put=__set__allPlayersSortedData)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*  _allPlayersSortedData;

 __declspec(property(get=get_gameId)) ::StringW  gameId;

 __declspec(property(get=get_localPlayerResultData)) ::GlobalNamespace::MultiplayerPlayerResultsData*  localPlayerResultData;

 __declspec(property(get=get_otherPlayersData)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*  otherPlayersData;

 __declspec(property(get=get_allPlayersSortedData)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*  allPlayersSortedData;

constexpr void __set__gameId(::StringW  value) ;

constexpr ::StringW& __get__gameId() ;

constexpr ::StringW const& __get__gameId() const;

constexpr void __set__localPlayerResultData(::GlobalNamespace::MultiplayerPlayerResultsData*  value) ;

constexpr ::GlobalNamespace::MultiplayerPlayerResultsData* __get__localPlayerResultData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayerResultsData*> __get__localPlayerResultData() const;

constexpr void __set__otherPlayersData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* __get__otherPlayersData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*> __get__otherPlayersData() const;

constexpr void __set__allPlayersSortedData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* __get__allPlayersSortedData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*> __get__allPlayersSortedData() const;

/// @brief Method get_gameId addr 0x2257e10 size 0x8 virtual false final false
inline ::StringW get_gameId() ;

/// @brief Method get_localPlayerResultData addr 0x2257e18 size 0x8 virtual false final false
inline ::GlobalNamespace::MultiplayerPlayerResultsData* get_localPlayerResultData() ;

/// @brief Method get_otherPlayersData addr 0x2257e20 size 0x8 virtual false final false
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* get_otherPlayersData() ;

/// @brief Method get_allPlayersSortedData addr 0x2257e28 size 0x8 virtual false final false
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* get_allPlayersSortedData() ;

static inline ::GlobalNamespace::MultiplayerResultsData* New_ctor(::StringW  gameId, ::GlobalNamespace::MultiplayerLevelCompletionResults*  localPlayerResultData, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*  otherPlayersResultData, ::GlobalNamespace::MultiplayerBadgesProvider*  badgesProvider, ::GlobalNamespace::IMultiplayerSessionManager*  multiplayerSessionManager) ;

/// @brief Method .ctor addr 0x2247900 size 0x54c virtual false final false
inline void _ctor(::StringW  gameId, ::GlobalNamespace::MultiplayerLevelCompletionResults*  localPlayerResultData, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*  otherPlayersResultData, ::GlobalNamespace::MultiplayerBadgesProvider*  badgesProvider, ::GlobalNamespace::IMultiplayerSessionManager*  multiplayerSessionManager) ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerResultsData(MultiplayerResultsData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerResultsData(MultiplayerResultsData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerResultsData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerResultsData, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerResultsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerResultsData*, "", "MultiplayerResultsData");
