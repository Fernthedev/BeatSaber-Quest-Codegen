#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLobbyAvatarPlaceManager)
namespace GlobalNamespace {
class __MultiplayerLobbyAvatarPlace__Pool;
}
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlace;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlaceManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager);
// Type: ::MultiplayerLobbyAvatarPlaceManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5226))
// CS Name: ::MultiplayerLobbyAvatarPlaceManager*
class CORDL_TYPE MultiplayerLobbyAvatarPlaceManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _lobbyStateDataModel offset 0x18
 __declspec(property(get=__get__lobbyStateDataModel, put=__set__lobbyStateDataModel)) ::GlobalNamespace::ILobbyStateDataModel*  _lobbyStateDataModel;

/// @brief Field _avatarPlacesPool offset 0x20
 __declspec(property(get=__get__avatarPlacesPool, put=__set__avatarPlacesPool)) ::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool*  _avatarPlacesPool;

/// @brief Field _allPlaces offset 0x28
 __declspec(property(get=__get__allPlaces, put=__set__allPlaces)) ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>*  _allPlaces;

/// @brief Field _innerCircleRadius offset 0x30
 __declspec(property(get=__get__innerCircleRadius, put=__set__innerCircleRadius)) float_t  _innerCircleRadius;

/// @brief Field _minOuterCircleRadius offset 0x34
 __declspec(property(get=__get__minOuterCircleRadius, put=__set__minOuterCircleRadius)) float_t  _minOuterCircleRadius;

constexpr void __set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel*  value) ;

constexpr ::GlobalNamespace::ILobbyStateDataModel* __get__lobbyStateDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyStateDataModel*> __get__lobbyStateDataModel() const;

constexpr void __set__avatarPlacesPool(::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool*  value) ;

constexpr ::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool* __get__avatarPlacesPool() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool*> __get__avatarPlacesPool() const;

constexpr void __set__allPlaces(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>* __get__allPlaces() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>*> __get__allPlaces() const;

constexpr void __set__innerCircleRadius(float_t  value) ;

constexpr float_t& __get__innerCircleRadius() ;

constexpr float_t const& __get__innerCircleRadius() const;

constexpr void __set__minOuterCircleRadius(float_t  value) ;

constexpr float_t& __get__minOuterCircleRadius() ;

constexpr float_t const& __get__minOuterCircleRadius() const;

/// @brief Method Activate addr 0x2251dc8 size 0x8 virtual false final false
inline void Activate(float_t  innerCircleRadius, float_t  minOuterCircleRadius) ;

/// @brief Method Deactivate addr 0x2252268 size 0x4 virtual false final false
inline void Deactivate() ;

/// @brief Method OnDestroy addr 0x22523b8 size 0x4 virtual false final false
inline void OnDestroy() ;

/// @brief Method SpawnAllPlaces addr 0x2251dd0 size 0x498 virtual false final false
inline void SpawnAllPlaces() ;

/// @brief Method DespawnAllPlaces addr 0x225226c size 0x14c virtual false final false
inline void DespawnAllPlaces() ;

static inline ::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager* New_ctor() ;

/// @brief Method .ctor addr 0x22523bc size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarPlaceManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLobbyAvatarPlaceManager(MultiplayerLobbyAvatarPlaceManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarPlaceManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLobbyAvatarPlaceManager(MultiplayerLobbyAvatarPlaceManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerLobbyAvatarPlaceManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*, "", "MultiplayerLobbyAvatarPlaceManager");
