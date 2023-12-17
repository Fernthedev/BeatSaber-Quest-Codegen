#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScoreMultiplierUIController)
namespace UnityEngine {
class Animator;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace UnityEngine::UI {
class Image;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class ScoreMultiplierUIController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScoreMultiplierUIController);
// Type: ::ScoreMultiplierUIController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5043))
// CS Name: ::ScoreMultiplierUIController*
class CORDL_TYPE ScoreMultiplierUIController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _multiplierTexts offset 0x18
 __declspec(property(get=__get__multiplierTexts, put=__set__multiplierTexts)) ::ArrayW<::TMPro::TextMeshProUGUI*,::Array<::TMPro::TextMeshProUGUI*>*>  _multiplierTexts;

/// @brief Field _multiplierProgressImage offset 0x20
 __declspec(property(get=__get__multiplierProgressImage, put=__set__multiplierProgressImage)) ::UnityEngine::UI::Image*  _multiplierProgressImage;

/// @brief Field _multiplierAnimator offset 0x28
 __declspec(property(get=__get__multiplierAnimator, put=__set__multiplierAnimator)) ::UnityEngine::Animator*  _multiplierAnimator;

/// @brief Field _scoreController offset 0x30
 __declspec(property(get=__get__scoreController, put=__set__scoreController)) ::GlobalNamespace::IScoreController*  _scoreController;

/// @brief Field _prevMultiplier offset 0x38
 __declspec(property(get=__get__prevMultiplier, put=__set__prevMultiplier)) int32_t  _prevMultiplier;

/// @brief Field _multiplierIncreasedTriggerId offset 0x3c
 __declspec(property(get=__get__multiplierIncreasedTriggerId, put=__set__multiplierIncreasedTriggerId)) int32_t  _multiplierIncreasedTriggerId;

/// @brief Field _progressTarget offset 0x40
 __declspec(property(get=__get__progressTarget, put=__set__progressTarget)) float_t  _progressTarget;

constexpr void __set__multiplierTexts(::ArrayW<::TMPro::TextMeshProUGUI*,::Array<::TMPro::TextMeshProUGUI*>*>  value) ;

constexpr ::ArrayW<::TMPro::TextMeshProUGUI*,::Array<::TMPro::TextMeshProUGUI*>*>& __get__multiplierTexts() ;

constexpr ::ArrayW<::TMPro::TextMeshProUGUI*,::Array<::TMPro::TextMeshProUGUI*>*> const& __get__multiplierTexts() const;

constexpr void __set__multiplierProgressImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__multiplierProgressImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__multiplierProgressImage() const;

constexpr void __set__multiplierAnimator(::UnityEngine::Animator*  value) ;

constexpr ::UnityEngine::Animator* __get__multiplierAnimator() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> __get__multiplierAnimator() const;

constexpr void __set__scoreController(::GlobalNamespace::IScoreController*  value) ;

constexpr ::GlobalNamespace::IScoreController* __get__scoreController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> __get__scoreController() const;

constexpr void __set__prevMultiplier(int32_t  value) ;

constexpr int32_t& __get__prevMultiplier() ;

constexpr int32_t const& __get__prevMultiplier() const;

constexpr void __set__multiplierIncreasedTriggerId(int32_t  value) ;

constexpr int32_t& __get__multiplierIncreasedTriggerId() ;

constexpr int32_t const& __get__multiplierIncreasedTriggerId() const;

constexpr void __set__progressTarget(float_t  value) ;

constexpr float_t& __get__progressTarget() ;

constexpr float_t const& __get__progressTarget() const;

/// @brief Method Start addr 0x23c2824 size 0xe4 virtual false final false
inline void Start() ;

/// @brief Method OnEnable addr 0x23c2aa4 size 0x4 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x23c2aa8 size 0x4 virtual false final false
inline void OnDisable() ;

/// @brief Method RegisterForEvents addr 0x23c2908 size 0x19c virtual false final false
inline void RegisterForEvents() ;

/// @brief Method UnregisterFromEvents addr 0x23c2aac size 0x108 virtual false final false
inline void UnregisterFromEvents() ;

/// @brief Method Update addr 0x23c2bb4 size 0x80 virtual false final false
inline void Update() ;

/// @brief Method HandleMultiplierDidChange addr 0x23c2c34 size 0xcc virtual false final false
inline void HandleMultiplierDidChange(int32_t  multiplier, float_t  progress) ;

static inline ::GlobalNamespace::ScoreMultiplierUIController* New_ctor() ;

/// @brief Method .ctor addr 0x23c2d00 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ScoreMultiplierUIController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScoreMultiplierUIController(ScoreMultiplierUIController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScoreMultiplierUIController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScoreMultiplierUIController(ScoreMultiplierUIController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ScoreMultiplierUIController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreMultiplierUIController, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScoreMultiplierUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreMultiplierUIController*, "", "ScoreMultiplierUIController");
