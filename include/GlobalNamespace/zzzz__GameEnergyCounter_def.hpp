#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameEnergyCounter)
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
struct __GameplayModifiers__EnergyType;
}
namespace GlobalNamespace {
class SaberClashChecker;
}
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IGameEnergyCounter;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class __GameEnergyCounter__InitData;
}
// Forward declare root types
namespace GlobalNamespace {
class GameEnergyCounter;
}
namespace GlobalNamespace {
class __GameEnergyCounter__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameEnergyCounter);
MARK_REF_PTR_T(::GlobalNamespace::__GameEnergyCounter__InitData);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5266))
// CS Name: ::GameEnergyCounter::InitData*
class CORDL_TYPE __GameEnergyCounter__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field energyType offset 0x10
 __declspec(property(get=__get_energyType, put=__set_energyType)) ::GlobalNamespace::__GameplayModifiers__EnergyType  energyType;

/// @brief Field noFail offset 0x14
 __declspec(property(get=__get_noFail, put=__set_noFail)) bool  noFail;

/// @brief Field instaFail offset 0x15
 __declspec(property(get=__get_instaFail, put=__set_instaFail)) bool  instaFail;

/// @brief Field failOnSaberClash offset 0x16
 __declspec(property(get=__get_failOnSaberClash, put=__set_failOnSaberClash)) bool  failOnSaberClash;

constexpr void __set_energyType(::GlobalNamespace::__GameplayModifiers__EnergyType  value) ;

constexpr ::GlobalNamespace::__GameplayModifiers__EnergyType& __get_energyType() ;

constexpr ::GlobalNamespace::__GameplayModifiers__EnergyType const& __get_energyType() const;

constexpr void __set_noFail(bool  value) ;

constexpr bool& __get_noFail() ;

constexpr bool const& __get_noFail() const;

constexpr void __set_instaFail(bool  value) ;

constexpr bool& __get_instaFail() ;

constexpr bool const& __get_instaFail() const;

constexpr void __set_failOnSaberClash(bool  value) ;

constexpr bool& __get_failOnSaberClash() ;

constexpr bool const& __get_failOnSaberClash() const;

static inline ::GlobalNamespace::__GameEnergyCounter__InitData* New_ctor(::GlobalNamespace::__GameplayModifiers__EnergyType  energyType, bool  noFail, bool  instaFail, bool  failOnSaberClash) ;

/// @brief Method .ctor addr 0x225fc20 size 0x48 virtual false final false
inline void _ctor(::GlobalNamespace::__GameplayModifiers__EnergyType  energyType, bool  noFail, bool  instaFail, bool  failOnSaberClash) ;

// Ctor Parameters [CppParam { name: "", ty: "__GameEnergyCounter__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GameEnergyCounter__InitData(__GameEnergyCounter__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GameEnergyCounter__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GameEnergyCounter__InitData(__GameEnergyCounter__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __GameEnergyCounter__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameEnergyCounter__InitData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::GameEnergyCounter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5267))
// CS Name: ::GameEnergyCounter*
class CORDL_TYPE GameEnergyCounter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = ::GlobalNamespace::__GameEnergyCounter__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kBadNoteEnergyDrain offset 0x0
static constexpr float_t  kBadNoteEnergyDrain{0.1};

/// @brief Field kBadBurstSliderElementEnergyDrain offset 0x0
static constexpr float_t  kBadBurstSliderElementEnergyDrain{0.025};

/// @brief Field kMissNoteEnergyDrain offset 0x0
static constexpr float_t  kMissNoteEnergyDrain{0.15};

/// @brief Field kMissBurstSliderElementEnergyDrain offset 0x0
static constexpr float_t  kMissBurstSliderElementEnergyDrain{0.03};

/// @brief Field kHitBombEnergyDrain offset 0x0
static constexpr float_t  kHitBombEnergyDrain{0.15};

/// @brief Field kGoodNoteEnergyCharge offset 0x0
static constexpr float_t  kGoodNoteEnergyCharge{0.01};

/// @brief Field kGoodBurstSliderElementCharge offset 0x0
static constexpr float_t  kGoodBurstSliderElementCharge{0.002};

/// @brief Field kObstacleEnergyDrainPerSecond offset 0x0
static constexpr float_t  kObstacleEnergyDrainPerSecond{1.3};

/// @brief Field _batteryLives offset 0x18
 __declspec(property(get=__get__batteryLives, put=__set__batteryLives)) int32_t  _batteryLives;

/// @brief Field _initData offset 0x20
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__GameEnergyCounter__InitData*  _initData;

/// @brief Field _saberClashChecker offset 0x28
 __declspec(property(get=__get__saberClashChecker, put=__set__saberClashChecker)) ::GlobalNamespace::SaberClashChecker*  _saberClashChecker;

/// @brief Field _beatmapObjectManager offset 0x30
 __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager*  _beatmapObjectManager;

/// @brief Field _playerHeadAndObstacleInteraction offset 0x38
 __declspec(property(get=__get__playerHeadAndObstacleInteraction, put=__set__playerHeadAndObstacleInteraction)) ::GlobalNamespace::PlayerHeadAndObstacleInteraction*  _playerHeadAndObstacleInteraction;

/// @brief Field didInitEvent offset 0x40
 __declspec(property(get=__get_didInitEvent, put=__set_didInitEvent)) ::System::Action*  didInitEvent;

/// @brief Field gameEnergyDidReach0Event offset 0x48
 __declspec(property(get=__get_gameEnergyDidReach0Event, put=__set_gameEnergyDidReach0Event)) ::System::Action*  gameEnergyDidReach0Event;

/// @brief Field gameEnergyDidChangeEvent offset 0x50
 __declspec(property(get=__get_gameEnergyDidChangeEvent, put=__set_gameEnergyDidChangeEvent)) ::System::Action_1<float_t>*  gameEnergyDidChangeEvent;

/// @brief Field <energy>k__BackingField offset 0x58
 __declspec(property(get=__get__energy_k__BackingField, put=__set__energy_k__BackingField)) float_t  _energy_k__BackingField;

/// @brief Field <energyType>k__BackingField offset 0x5c
 __declspec(property(get=__get__energyType_k__BackingField, put=__set__energyType_k__BackingField)) ::GlobalNamespace::__GameplayModifiers__EnergyType  _energyType_k__BackingField;

/// @brief Field <noFail>k__BackingField offset 0x60
 __declspec(property(get=__get__noFail_k__BackingField, put=__set__noFail_k__BackingField)) bool  _noFail_k__BackingField;

/// @brief Field <instaFail>k__BackingField offset 0x61
 __declspec(property(get=__get__instaFail_k__BackingField, put=__set__instaFail_k__BackingField)) bool  _instaFail_k__BackingField;

/// @brief Field <failOnSaberClash>k__BackingField offset 0x62
 __declspec(property(get=__get__failOnSaberClash_k__BackingField, put=__set__failOnSaberClash_k__BackingField)) bool  _failOnSaberClash_k__BackingField;

/// @brief Field _isInitialized offset 0x63
 __declspec(property(get=__get__isInitialized, put=__set__isInitialized)) bool  _isInitialized;

/// @brief Field _didReach0Energy offset 0x64
 __declspec(property(get=__get__didReach0Energy, put=__set__didReach0Energy)) bool  _didReach0Energy;

/// @brief Field _nextFrameEnergyChange offset 0x68
 __declspec(property(get=__get__nextFrameEnergyChange, put=__set__nextFrameEnergyChange)) float_t  _nextFrameEnergyChange;

 __declspec(property(get=get_isInitialized)) bool  isInitialized;

 __declspec(property(get=get_energy, put=set_energy)) float_t  energy;

 __declspec(property(get=get_batteryEnergy)) int32_t  batteryEnergy;

 __declspec(property(get=get_batteryLives)) int32_t  batteryLives;

 __declspec(property(get=get_energyType, put=set_energyType)) ::GlobalNamespace::__GameplayModifiers__EnergyType  energyType;

 __declspec(property(get=get_noFail, put=set_noFail)) bool  noFail;

 __declspec(property(get=get_instaFail, put=set_instaFail)) bool  instaFail;

 __declspec(property(get=get_failOnSaberClash, put=set_failOnSaberClash)) bool  failOnSaberClash;

/// @brief Convert operator to "::GlobalNamespace::IGameEnergyCounter"
constexpr operator  ::GlobalNamespace::IGameEnergyCounter*() noexcept;

constexpr void __set__batteryLives(int32_t  value) ;

constexpr int32_t& __get__batteryLives() ;

constexpr int32_t const& __get__batteryLives() const;

constexpr void __set__initData(::GlobalNamespace::__GameEnergyCounter__InitData*  value) ;

constexpr ::GlobalNamespace::__GameEnergyCounter__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameEnergyCounter__InitData*> __get__initData() const;

constexpr void __set__saberClashChecker(::GlobalNamespace::SaberClashChecker*  value) ;

constexpr ::GlobalNamespace::SaberClashChecker* __get__saberClashChecker() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberClashChecker*> __get__saberClashChecker() const;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager* __get__beatmapObjectManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> __get__beatmapObjectManager() const;

constexpr void __set__playerHeadAndObstacleInteraction(::GlobalNamespace::PlayerHeadAndObstacleInteraction*  value) ;

constexpr ::GlobalNamespace::PlayerHeadAndObstacleInteraction* __get__playerHeadAndObstacleInteraction() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerHeadAndObstacleInteraction*> __get__playerHeadAndObstacleInteraction() const;

constexpr void __set_didInitEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didInitEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didInitEvent() const;

constexpr void __set_gameEnergyDidReach0Event(::System::Action*  value) ;

constexpr ::System::Action* __get_gameEnergyDidReach0Event() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_gameEnergyDidReach0Event() const;

constexpr void __set_gameEnergyDidChangeEvent(::System::Action_1<float_t>*  value) ;

constexpr ::System::Action_1<float_t>* __get_gameEnergyDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> __get_gameEnergyDidChangeEvent() const;

constexpr void __set__energy_k__BackingField(float_t  value) ;

constexpr float_t& __get__energy_k__BackingField() ;

constexpr float_t const& __get__energy_k__BackingField() const;

constexpr void __set__energyType_k__BackingField(::GlobalNamespace::__GameplayModifiers__EnergyType  value) ;

constexpr ::GlobalNamespace::__GameplayModifiers__EnergyType& __get__energyType_k__BackingField() ;

constexpr ::GlobalNamespace::__GameplayModifiers__EnergyType const& __get__energyType_k__BackingField() const;

constexpr void __set__noFail_k__BackingField(bool  value) ;

constexpr bool& __get__noFail_k__BackingField() ;

constexpr bool const& __get__noFail_k__BackingField() const;

constexpr void __set__instaFail_k__BackingField(bool  value) ;

constexpr bool& __get__instaFail_k__BackingField() ;

constexpr bool const& __get__instaFail_k__BackingField() const;

constexpr void __set__failOnSaberClash_k__BackingField(bool  value) ;

constexpr bool& __get__failOnSaberClash_k__BackingField() ;

constexpr bool const& __get__failOnSaberClash_k__BackingField() const;

constexpr void __set__isInitialized(bool  value) ;

constexpr bool& __get__isInitialized() ;

constexpr bool const& __get__isInitialized() const;

constexpr void __set__didReach0Energy(bool  value) ;

constexpr bool& __get__didReach0Energy() ;

constexpr bool const& __get__didReach0Energy() const;

constexpr void __set__nextFrameEnergyChange(float_t  value) ;

constexpr float_t& __get__nextFrameEnergyChange() ;

constexpr float_t const& __get__nextFrameEnergyChange() const;

/// @brief Method add_didInitEvent addr 0x225efc0 size 0x9c virtual true final true
inline void add_didInitEvent(::System::Action*  value) ;

/// @brief Method remove_didInitEvent addr 0x225f05c size 0x9c virtual true final true
inline void remove_didInitEvent(::System::Action*  value) ;

/// @brief Method add_gameEnergyDidReach0Event addr 0x225f0f8 size 0x9c virtual true final true
inline void add_gameEnergyDidReach0Event(::System::Action*  value) ;

/// @brief Method remove_gameEnergyDidReach0Event addr 0x225f194 size 0x9c virtual true final true
inline void remove_gameEnergyDidReach0Event(::System::Action*  value) ;

/// @brief Method add_gameEnergyDidChangeEvent addr 0x225f230 size 0xb0 virtual true final true
inline void add_gameEnergyDidChangeEvent(::System::Action_1<float_t>*  value) ;

/// @brief Method remove_gameEnergyDidChangeEvent addr 0x225f2e0 size 0xb0 virtual true final true
inline void remove_gameEnergyDidChangeEvent(::System::Action_1<float_t>*  value) ;

/// @brief Method get_isInitialized addr 0x225f390 size 0x8 virtual true final true
inline bool get_isInitialized() ;

/// @brief Method get_energy addr 0x225f398 size 0x8 virtual true final true
inline float_t get_energy() ;

/// @brief Method set_energy addr 0x225f3a0 size 0x8 virtual false final false
inline void set_energy(float_t  value) ;

/// @brief Method get_batteryEnergy addr 0x225f3a8 size 0x80 virtual true final true
inline int32_t get_batteryEnergy() ;

/// @brief Method get_batteryLives addr 0x225f428 size 0x8 virtual true final true
inline int32_t get_batteryLives() ;

/// @brief Method get_energyType addr 0x225f430 size 0x8 virtual true final true
inline ::GlobalNamespace::__GameplayModifiers__EnergyType get_energyType() ;

/// @brief Method set_energyType addr 0x225f438 size 0x8 virtual false final false
inline void set_energyType(::GlobalNamespace::__GameplayModifiers__EnergyType  value) ;

/// @brief Method get_noFail addr 0x225f440 size 0x8 virtual true final true
inline bool get_noFail() ;

/// @brief Method set_noFail addr 0x225f448 size 0xc virtual false final false
inline void set_noFail(bool  value) ;

/// @brief Method get_instaFail addr 0x225f454 size 0x8 virtual true final true
inline bool get_instaFail() ;

/// @brief Method set_instaFail addr 0x225f45c size 0xc virtual false final false
inline void set_instaFail(bool  value) ;

/// @brief Method get_failOnSaberClash addr 0x225f468 size 0x8 virtual true final true
inline bool get_failOnSaberClash() ;

/// @brief Method set_failOnSaberClash addr 0x225f470 size 0xc virtual false final false
inline void set_failOnSaberClash(bool  value) ;

/// @brief Method Start addr 0x225f47c size 0x194 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x225f610 size 0x104 virtual false final false
inline void OnDestroy() ;

/// @brief Method LateUpdate addr 0x225f714 size 0x108 virtual false final false
inline void LateUpdate() ;

/// @brief Method HandleNoteWasCut addr 0x225fac0 size 0xe4 virtual false final false
inline void HandleNoteWasCut(::GlobalNamespace::NoteController*  noteController, ByRef<::GlobalNamespace::NoteCutInfo>  noteCutInfo) ;

/// @brief Method HandleNoteWasMissed addr 0x225fba4 size 0x64 virtual false final false
inline void HandleNoteWasMissed(::GlobalNamespace::NoteController*  noteController) ;

/// @brief Method ProcessEnergyChange addr 0x225f86c size 0xf0 virtual false final false
inline void ProcessEnergyChange(float_t  energyChange) ;

static inline ::GlobalNamespace::GameEnergyCounter* New_ctor() ;

/// @brief Method .ctor addr 0x225fc08 size 0x18 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GameEnergyCounter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameEnergyCounter(GameEnergyCounter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameEnergyCounter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameEnergyCounter(GameEnergyCounter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameEnergyCounter()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameEnergyCounter, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameEnergyCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameEnergyCounter*, "", "GameEnergyCounter");
NEED_NO_BOX(::GlobalNamespace::__GameEnergyCounter__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameEnergyCounter__InitData*, "", "GameEnergyCounter/InitData");
