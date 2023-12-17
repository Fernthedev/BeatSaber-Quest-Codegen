#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MissionStageLockView)
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionStageLockView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionStageLockView);
// Type: ::MissionStageLockView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5552))
// CS Name: ::MissionStageLockView*
class CORDL_TYPE MissionStageLockView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _text offset 0x18
 __declspec(property(get=__get__text, put=__set__text)) ::TMPro::TMP_Text*  _text;

/// @brief Field _rectTransform offset 0x20
 __declspec(property(get=__get__rectTransform, put=__set__rectTransform)) ::UnityEngine::RectTransform*  _rectTransform;

/// @brief Field _dstPosY offset 0x28
 __declspec(property(get=__get__dstPosY, put=__set__dstPosY)) float_t  _dstPosY;

/// @brief Field _animationDuration offset 0x2c
 __declspec(property(get=__get__animationDuration, put=__set__animationDuration)) float_t  _animationDuration;

/// @brief Field _startAnimationTime offset 0x30
 __declspec(property(get=__get__startAnimationTime, put=__set__startAnimationTime)) float_t  _startAnimationTime;

constexpr void __set__text(::TMPro::TMP_Text*  value) ;

constexpr ::TMPro::TMP_Text* __get__text() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_Text*> __get__text() const;

constexpr void __set__rectTransform(::UnityEngine::RectTransform*  value) ;

constexpr ::UnityEngine::RectTransform* __get__rectTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> __get__rectTransform() const;

constexpr void __set__dstPosY(float_t  value) ;

constexpr float_t& __get__dstPosY() ;

constexpr float_t const& __get__dstPosY() const;

constexpr void __set__animationDuration(float_t  value) ;

constexpr float_t& __get__animationDuration() ;

constexpr float_t const& __get__animationDuration() const;

constexpr void __set__startAnimationTime(float_t  value) ;

constexpr float_t& __get__startAnimationTime() ;

constexpr float_t const& __get__startAnimationTime() const;

/// @brief Method UpdateLocalPositionY addr 0x22a2244 size 0x64 virtual false final false
inline void UpdateLocalPositionY(float_t  dstPosY, bool  animated, float_t  animationDuration) ;

/// @brief Method Update addr 0x22a22a8 size 0xd0 virtual false final false
inline void Update() ;

/// @brief Method UpdateStageLockText addr 0x22a2378 size 0x24 virtual false final false
inline void UpdateStageLockText(::StringW  text) ;

static inline ::GlobalNamespace::MissionStageLockView* New_ctor() ;

/// @brief Method .ctor addr 0x22a239c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MissionStageLockView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionStageLockView(MissionStageLockView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionStageLockView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionStageLockView(MissionStageLockView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionStageLockView()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionStageLockView, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionStageLockView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionStageLockView*, "", "MissionStageLockView");
