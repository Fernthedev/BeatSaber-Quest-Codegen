#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenBackButtonAnimationController)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Animator;
}
namespace GlobalNamespace {
struct __ScreenBackButtonAnimationController__AnimationType;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ScreenBackButtonAnimationController__AnimationType;
}
namespace GlobalNamespace {
class ScreenBackButtonAnimationController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType);
MARK_REF_PTR_T(::GlobalNamespace::ScreenBackButtonAnimationController);
// Type: ::AnimationType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13498))
// CS Name: ::ScreenBackButtonAnimationController::AnimationType
struct CORDL_TYPE __ScreenBackButtonAnimationController__AnimationType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ScreenBackButtonAnimationController__AnimationType_Unwrapped
enum struct ____ScreenBackButtonAnimationController__AnimationType_Unwrapped : int32_t {
__E_FadeIn = static_cast<int32_t>(0x0),
__E_FadeOut = static_cast<int32_t>(0x1),
__E_MoveIn = static_cast<int32_t>(0x2),
__E_MoveOut = static_cast<int32_t>(0x3),
__E_MoveIn2 = static_cast<int32_t>(0x4),
__E_MoveOut2 = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field FadeIn value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType const FadeIn;

/// @brief Field FadeOut value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType const FadeOut;

/// @brief Field MoveIn value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType const MoveIn;

/// @brief Field MoveOut value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType const MoveOut;

/// @brief Field MoveIn2 value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType const MoveIn2;

/// @brief Field MoveOut2 value: static_cast<int32_t>(0x5)
static ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType const MoveOut2;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ScreenBackButtonAnimationController__AnimationType_Unwrapped () const noexcept {
return std::bit_cast<____ScreenBackButtonAnimationController__AnimationType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ScreenBackButtonAnimationController__AnimationType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ScreenBackButtonAnimationController__AnimationType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ScreenBackButtonAnimationController__AnimationType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ScreenBackButtonAnimationController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13499))
// CS Name: ::ScreenBackButtonAnimationController*
class CORDL_TYPE ScreenBackButtonAnimationController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AnimationType = ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _animator offset 0x18
 __declspec(property(get=__get__animator, put=__set__animator)) ::UnityEngine::Animator*  _animator;

/// @brief Field _animationHashes offset 0x20
 __declspec(property(get=__get__animationHashes, put=__set__animationHashes)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType,int32_t>*  _animationHashes;

constexpr void __set__animator(::UnityEngine::Animator*  value) ;

constexpr ::UnityEngine::Animator* __get__animator() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> __get__animator() const;

constexpr void __set__animationHashes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType,int32_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType,int32_t>* __get__animationHashes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType,int32_t>*> __get__animationHashes() const;

/// @brief Method Awake addr 0x2115f54 size 0x20 virtual false final false
inline void Awake() ;

/// @brief Method StartAnimation addr 0x2115f74 size 0x70 virtual false final false
inline void StartAnimation(::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType  animationType) ;

static inline ::GlobalNamespace::ScreenBackButtonAnimationController* New_ctor() ;

/// @brief Method .ctor addr 0x2115fe4 size 0x1e0 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ScreenBackButtonAnimationController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScreenBackButtonAnimationController(ScreenBackButtonAnimationController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScreenBackButtonAnimationController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScreenBackButtonAnimationController(ScreenBackButtonAnimationController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ScreenBackButtonAnimationController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenBackButtonAnimationController, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType, "", "ScreenBackButtonAnimationController/AnimationType");
NEED_NO_BOX(::GlobalNamespace::ScreenBackButtonAnimationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenBackButtonAnimationController*, "", "ScreenBackButtonAnimationController");
