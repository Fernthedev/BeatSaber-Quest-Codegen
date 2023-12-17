#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PS5AdvancedHapticsPlayerController)
namespace GlobalNamespace {
class __HapticsAudioClipPlayer__Pool;
}
namespace GlobalNamespace {
class __PS5AdvancedHapticsPlayerController____c__DisplayClass7_0;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class HapticsAudioClipPlayer;
}
namespace GlobalNamespace {
class __PS5AdvancedHapticsPlayerController____c__DisplayClass6_0;
}
namespace Zenject {
class IInitializable;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace GlobalNamespace {
class IHapticFeedbackPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class PS5AdvancedHapticsPlayerController;
}
namespace GlobalNamespace {
class __PS5AdvancedHapticsPlayerController____c__DisplayClass6_0;
}
namespace GlobalNamespace {
class __PS5AdvancedHapticsPlayerController____c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5AdvancedHapticsPlayerController);
MARK_REF_PTR_T(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0);
MARK_REF_PTR_T(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0);
// Type: ::<>c__DisplayClass6_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14425))
// CS Name: ::PS5AdvancedHapticsPlayerController::<>c__DisplayClass6_0*
class CORDL_TYPE __PS5AdvancedHapticsPlayerController____c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::PS5AdvancedHapticsPlayerController*  __4__this;

/// @brief Field node offset 0x18
 __declspec(property(get=__get_node, put=__set_node)) ::UnityEngine::XR::XRNode  node;

/// @brief Field hapticPreset offset 0x20
 __declspec(property(get=__get_hapticPreset, put=__set_hapticPreset)) ::Libraries::HM::HMLib::VR::HapticPresetSO*  hapticPreset;

constexpr void __set___4__this(::GlobalNamespace::PS5AdvancedHapticsPlayerController*  value) ;

constexpr ::GlobalNamespace::PS5AdvancedHapticsPlayerController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5AdvancedHapticsPlayerController*> __get___4__this() const;

constexpr void __set_node(::UnityEngine::XR::XRNode  value) ;

constexpr ::UnityEngine::XR::XRNode& __get_node() ;

constexpr ::UnityEngine::XR::XRNode const& __get_node() const;

constexpr void __set_hapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  value) ;

constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO* __get_hapticPreset() ;

constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> __get_hapticPreset() const;

static inline ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0* New_ctor() ;

/// @brief Method .ctor addr 0x20f9ecc size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <PlayContinuousHapticPreset>b__0 addr 0x20f9fb0 size 0xac virtual false final false
inline void _PlayContinuousHapticPreset_b__0(::GlobalNamespace::HapticsAudioClipPlayer*  player) ;

// Ctor Parameters [CppParam { name: "", ty: "__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0(__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0(__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PS5AdvancedHapticsPlayerController____c__DisplayClass6_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass7_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14426))
// CS Name: ::PS5AdvancedHapticsPlayerController::<>c__DisplayClass7_0*
class CORDL_TYPE __PS5AdvancedHapticsPlayerController____c__DisplayClass7_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::PS5AdvancedHapticsPlayerController*  __4__this;

/// @brief Field node offset 0x18
 __declspec(property(get=__get_node, put=__set_node)) ::UnityEngine::XR::XRNode  node;

/// @brief Field hapticPreset offset 0x20
 __declspec(property(get=__get_hapticPreset, put=__set_hapticPreset)) ::Libraries::HM::HMLib::VR::HapticPresetSO*  hapticPreset;

constexpr void __set___4__this(::GlobalNamespace::PS5AdvancedHapticsPlayerController*  value) ;

constexpr ::GlobalNamespace::PS5AdvancedHapticsPlayerController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5AdvancedHapticsPlayerController*> __get___4__this() const;

constexpr void __set_node(::UnityEngine::XR::XRNode  value) ;

constexpr ::UnityEngine::XR::XRNode& __get_node() ;

constexpr ::UnityEngine::XR::XRNode const& __get_node() const;

constexpr void __set_hapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  value) ;

constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO* __get_hapticPreset() ;

constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> __get_hapticPreset() const;

static inline ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0* New_ctor() ;

/// @brief Method .ctor addr 0x20f9ed4 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <PlayOneShotHapticPreset>b__0 addr 0x20fa05c size 0xac virtual false final false
inline void _PlayOneShotHapticPreset_b__0(::GlobalNamespace::HapticsAudioClipPlayer*  player) ;

// Ctor Parameters [CppParam { name: "", ty: "__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0(__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0(__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PS5AdvancedHapticsPlayerController____c__DisplayClass7_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PS5AdvancedHapticsPlayerController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14427))
// CS Name: ::PS5AdvancedHapticsPlayerController*
class CORDL_TYPE PS5AdvancedHapticsPlayerController : public ::System::Object {
public:
// Declarations
using __c__DisplayClass7_0 = ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0;

using __c__DisplayClass6_0 = ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _hapticsPlayerPool offset 0x10
 __declspec(property(get=__get__hapticsPlayerPool, put=__set__hapticsPlayerPool)) ::GlobalNamespace::__HapticsAudioClipPlayer__Pool*  _hapticsPlayerPool;

/// @brief Field _coroutineStarter offset 0x18
 __declspec(property(get=__get__coroutineStarter, put=__set__coroutineStarter)) ::GlobalNamespace::ICoroutineStarter*  _coroutineStarter;

/// @brief Field _activePlayers offset 0x20
 __declspec(property(get=__get__activePlayers, put=__set__activePlayers)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode,::Libraries::HM::HMLib::VR::HapticPresetSO*>,::GlobalNamespace::HapticsAudioClipPlayer*>*  _activePlayers;

/// @brief Convert operator to "::GlobalNamespace::IHapticFeedbackPlayer"
constexpr operator  ::GlobalNamespace::IHapticFeedbackPlayer*() noexcept;

/// @brief Convert operator to "::Zenject::IInitializable"
constexpr operator  ::Zenject::IInitializable*() noexcept;

constexpr void __set__hapticsPlayerPool(::GlobalNamespace::__HapticsAudioClipPlayer__Pool*  value) ;

constexpr ::GlobalNamespace::__HapticsAudioClipPlayer__Pool* __get__hapticsPlayerPool() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*> __get__hapticsPlayerPool() const;

constexpr void __set__coroutineStarter(::GlobalNamespace::ICoroutineStarter*  value) ;

constexpr ::GlobalNamespace::ICoroutineStarter* __get__coroutineStarter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICoroutineStarter*> __get__coroutineStarter() const;

constexpr void __set__activePlayers(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode,::Libraries::HM::HMLib::VR::HapticPresetSO*>,::GlobalNamespace::HapticsAudioClipPlayer*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode,::Libraries::HM::HMLib::VR::HapticPresetSO*>,::GlobalNamespace::HapticsAudioClipPlayer*>* __get__activePlayers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode,::Libraries::HM::HMLib::VR::HapticPresetSO*>,::GlobalNamespace::HapticsAudioClipPlayer*>*> __get__activePlayers() const;

/// @brief Method Initialize addr 0x20f9a90 size 0x4 virtual true final true
inline void Initialize() ;

/// @brief Method PlayHapticFeedback addr 0x20f9a94 size 0x24 virtual true final true
inline void PlayHapticFeedback(::UnityEngine::XR::XRNode  node, ::Libraries::HM::HMLib::VR::HapticPresetSO*  hapticPreset) ;

/// @brief Method CanPlayHapticPreset addr 0x20f9e64 size 0x68 virtual true final true
inline bool CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  hapticPreset) ;

/// @brief Method PlayContinuousHapticPreset addr 0x20f9c8c size 0x1d8 virtual false final false
inline void PlayContinuousHapticPreset(::UnityEngine::XR::XRNode  node, ::Libraries::HM::HMLib::VR::HapticPresetSO*  hapticPreset) ;

/// @brief Method PlayOneShotHapticPreset addr 0x20f9ab8 size 0x1d4 virtual false final false
inline void PlayOneShotHapticPreset(::UnityEngine::XR::XRNode  node, ::Libraries::HM::HMLib::VR::HapticPresetSO*  hapticPreset) ;

/// @brief Method OnHapticPlayFinishedCallback addr 0x20f9edc size 0x58 virtual false final false
inline void OnHapticPlayFinishedCallback(::GlobalNamespace::HapticsAudioClipPlayer*  player) ;

static inline ::GlobalNamespace::PS5AdvancedHapticsPlayerController* New_ctor() ;

/// @brief Method .ctor addr 0x20f9f34 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PS5AdvancedHapticsPlayerController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PS5AdvancedHapticsPlayerController(PS5AdvancedHapticsPlayerController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PS5AdvancedHapticsPlayerController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PS5AdvancedHapticsPlayerController(PS5AdvancedHapticsPlayerController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PS5AdvancedHapticsPlayerController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5AdvancedHapticsPlayerController, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5AdvancedHapticsPlayerController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5AdvancedHapticsPlayerController*, "", "PS5AdvancedHapticsPlayerController");
NEED_NO_BOX(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0*, "", "PS5AdvancedHapticsPlayerController/<>c__DisplayClass6_0");
NEED_NO_BOX(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0*, "", "PS5AdvancedHapticsPlayerController/<>c__DisplayClass7_0");
