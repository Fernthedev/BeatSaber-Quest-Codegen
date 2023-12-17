#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerEnvironmentSpectatingSpot)
namespace GlobalNamespace {
class MultiplayerActivePlayersTimeOffsetAverage;
}
namespace GlobalNamespace {
class IMultiplayerSpectatingSpot;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IMultiplayerObservable;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class MultiplayerSpectatingSpotManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerEnvironmentSpectatingSpot;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerEnvironmentSpectatingSpot);
// Type: ::MultiplayerEnvironmentSpectatingSpot
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5260))
// CS Name: ::MultiplayerEnvironmentSpectatingSpot*
class CORDL_TYPE MultiplayerEnvironmentSpectatingSpot : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _preferredSpectatingSpot offset 0x18
 __declspec(property(get=__get__preferredSpectatingSpot, put=__set__preferredSpectatingSpot)) bool  _preferredSpectatingSpot;

/// @brief Field _displaySpotNumber offset 0x19
 __declspec(property(get=__get__displaySpotNumber, put=__set__displaySpotNumber)) bool  _displaySpotNumber;

/// @brief Field _spotNumber offset 0x1c
 __declspec(property(get=__get__spotNumber, put=__set__spotNumber)) int32_t  _spotNumber;

/// @brief Field _spectatingSpotManager offset 0x20
 __declspec(property(get=__get__spectatingSpotManager, put=__set__spectatingSpotManager)) ::GlobalNamespace::MultiplayerSpectatingSpotManager*  _spectatingSpotManager;

/// @brief Field _activePlayersTimeOffsetAverage offset 0x28
 __declspec(property(get=__get__activePlayersTimeOffsetAverage, put=__set__activePlayersTimeOffsetAverage)) ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*  _activePlayersTimeOffsetAverage;

/// @brief Field hasBeenRemovedEvent offset 0x30
 __declspec(property(get=__get_hasBeenRemovedEvent, put=__set_hasBeenRemovedEvent)) ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*  hasBeenRemovedEvent;

 __declspec(property(get=get_observable)) ::GlobalNamespace::IMultiplayerObservable*  observable;

 __declspec(property(get=get_spotName)) ::StringW  spotName;

 __declspec(property(get=get_isMain)) bool  isMain;

/// @brief Convert operator to "::GlobalNamespace::IMultiplayerSpectatingSpot"
constexpr operator  ::GlobalNamespace::IMultiplayerSpectatingSpot*() noexcept;

constexpr void __set__preferredSpectatingSpot(bool  value) ;

constexpr bool& __get__preferredSpectatingSpot() ;

constexpr bool const& __get__preferredSpectatingSpot() const;

constexpr void __set__displaySpotNumber(bool  value) ;

constexpr bool& __get__displaySpotNumber() ;

constexpr bool const& __get__displaySpotNumber() const;

constexpr void __set__spotNumber(int32_t  value) ;

constexpr int32_t& __get__spotNumber() ;

constexpr int32_t const& __get__spotNumber() const;

constexpr void __set__spectatingSpotManager(::GlobalNamespace::MultiplayerSpectatingSpotManager*  value) ;

constexpr ::GlobalNamespace::MultiplayerSpectatingSpotManager* __get__spectatingSpotManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerSpectatingSpotManager*> __get__spectatingSpotManager() const;

constexpr void __set__activePlayersTimeOffsetAverage(::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*  value) ;

constexpr ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage* __get__activePlayersTimeOffsetAverage() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*> __get__activePlayersTimeOffsetAverage() const;

constexpr void __set_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* __get_hasBeenRemovedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*> __get_hasBeenRemovedEvent() const;

/// @brief Method add_hasBeenRemovedEvent addr 0x225dd40 size 0xb0 virtual true final true
inline void add_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*  value) ;

/// @brief Method remove_hasBeenRemovedEvent addr 0x225ddf0 size 0xb0 virtual true final true
inline void remove_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*  value) ;

/// @brief Method get_observable addr 0x225dea0 size 0x8 virtual true final true
inline ::GlobalNamespace::IMultiplayerObservable* get_observable() ;

/// @brief Method get_spotName addr 0x225dea8 size 0xbc virtual true final true
inline ::StringW get_spotName() ;

/// @brief Method get_isMain addr 0x225df64 size 0x8 virtual true final true
inline bool get_isMain() ;

/// @brief Method Start addr 0x225df6c size 0x1c virtual false final false
inline void Start() ;

/// @brief Method OnDisable addr 0x225df88 size 0x20 virtual false final false
inline void OnDisable() ;

/// @brief Method SetIsObserved addr 0x225dfa8 size 0x4 virtual true final true
inline void SetIsObserved(bool  isObserved) ;

static inline ::GlobalNamespace::MultiplayerEnvironmentSpectatingSpot* New_ctor() ;

/// @brief Method .ctor addr 0x225dfac size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method IMultiplayerSpectatingSpot.get_transform addr 0x225dfb4 size 0x8 virtual true final true
inline ::UnityEngine::Transform* IMultiplayerSpectatingSpot_get_transform() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerEnvironmentSpectatingSpot", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerEnvironmentSpectatingSpot(MultiplayerEnvironmentSpectatingSpot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerEnvironmentSpectatingSpot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerEnvironmentSpectatingSpot(MultiplayerEnvironmentSpectatingSpot const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerEnvironmentSpectatingSpot()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerEnvironmentSpectatingSpot, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerEnvironmentSpectatingSpot);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerEnvironmentSpectatingSpot*, "", "MultiplayerEnvironmentSpectatingSpot");
