#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScoreUIController)
namespace TMPro {
class TextMeshProUGUI;
}
namespace System::Text {
class StringBuilder;
}
namespace GlobalNamespace {
class __ScoreUIController__InitData;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
struct __ScoreUIController__ScoreDisplayType;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ScoreUIController__ScoreDisplayType;
}
namespace GlobalNamespace {
class ScoreUIController;
}
namespace GlobalNamespace {
class __ScoreUIController__InitData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ScoreUIController__ScoreDisplayType);
MARK_REF_PTR_T(::GlobalNamespace::ScoreUIController);
MARK_REF_PTR_T(::GlobalNamespace::__ScoreUIController__InitData);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5044))
// CS Name: ::ScoreUIController::InitData*
class CORDL_TYPE __ScoreUIController__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field scoreDisplayType offset 0x10
 __declspec(property(get=__get_scoreDisplayType, put=__set_scoreDisplayType)) ::GlobalNamespace::__ScoreUIController__ScoreDisplayType  scoreDisplayType;

constexpr void __set_scoreDisplayType(::GlobalNamespace::__ScoreUIController__ScoreDisplayType  value) ;

constexpr ::GlobalNamespace::__ScoreUIController__ScoreDisplayType& __get_scoreDisplayType() ;

constexpr ::GlobalNamespace::__ScoreUIController__ScoreDisplayType const& __get_scoreDisplayType() const;

static inline ::GlobalNamespace::__ScoreUIController__InitData* New_ctor(::GlobalNamespace::__ScoreUIController__ScoreDisplayType  scoreDisplayType) ;

/// @brief Method .ctor addr 0x23c3280 size 0x28 virtual false final false
inline void _ctor(::GlobalNamespace::__ScoreUIController__ScoreDisplayType  scoreDisplayType) ;

// Ctor Parameters [CppParam { name: "", ty: "__ScoreUIController__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ScoreUIController__InitData(__ScoreUIController__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ScoreUIController__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ScoreUIController__InitData(__ScoreUIController__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ScoreUIController__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScoreUIController__InitData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ScoreDisplayType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5045))
// CS Name: ::ScoreUIController::ScoreDisplayType
struct CORDL_TYPE __ScoreUIController__ScoreDisplayType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ScoreUIController__ScoreDisplayType_Unwrapped
enum struct ____ScoreUIController__ScoreDisplayType_Unwrapped : int32_t {
__E_MultipliedScore = static_cast<int32_t>(0x0),
__E_ModifiedScore = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field MultipliedScore value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__ScoreUIController__ScoreDisplayType const MultipliedScore;

/// @brief Field ModifiedScore value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__ScoreUIController__ScoreDisplayType const ModifiedScore;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ScoreUIController__ScoreDisplayType_Unwrapped () const noexcept {
return std::bit_cast<____ScoreUIController__ScoreDisplayType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ScoreUIController__ScoreDisplayType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ScoreUIController__ScoreDisplayType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ScoreUIController__ScoreDisplayType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScoreUIController__ScoreDisplayType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ScoreUIController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5046))
// CS Name: ::ScoreUIController*
class CORDL_TYPE ScoreUIController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ScoreDisplayType = ::GlobalNamespace::__ScoreUIController__ScoreDisplayType;

using InitData = ::GlobalNamespace::__ScoreUIController__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kMaxNumberOfDigits offset 0x0
static constexpr int32_t  kMaxNumberOfDigits{static_cast<int32_t>(0x9)};

/// @brief Field _scoreText offset 0x18
 __declspec(property(get=__get__scoreText, put=__set__scoreText)) ::TMPro::TextMeshProUGUI*  _scoreText;

/// @brief Field _initData offset 0x20
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__ScoreUIController__InitData*  _initData;

/// @brief Field _scoreController offset 0x28
 __declspec(property(get=__get__scoreController, put=__set__scoreController)) ::GlobalNamespace::IScoreController*  _scoreController;

/// @brief Field _stringBuilder offset 0x30
 __declspec(property(get=__get__stringBuilder, put=__set__stringBuilder)) ::System::Text::StringBuilder*  _stringBuilder;

constexpr void __set__scoreText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__scoreText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__scoreText() const;

constexpr void __set__initData(::GlobalNamespace::__ScoreUIController__InitData*  value) ;

constexpr ::GlobalNamespace::__ScoreUIController__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ScoreUIController__InitData*> __get__initData() const;

constexpr void __set__scoreController(::GlobalNamespace::IScoreController*  value) ;

constexpr ::GlobalNamespace::IScoreController* __get__scoreController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> __get__scoreController() const;

constexpr void __set__stringBuilder(::System::Text::StringBuilder*  value) ;

constexpr ::System::Text::StringBuilder* __get__stringBuilder() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> __get__stringBuilder() const;

/// @brief Method Start addr 0x23c2d08 size 0x78 virtual false final false
inline void Start() ;

/// @brief Method OnEnable addr 0x23c309c size 0x4 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x23c30a0 size 0x4 virtual false final false
inline void OnDisable() ;

/// @brief Method RegisterForEvents addr 0x23c2d80 size 0x198 virtual false final false
inline void RegisterForEvents() ;

/// @brief Method UnregisterFromEvents addr 0x23c30a4 size 0x108 virtual false final false
inline void UnregisterFromEvents() ;

/// @brief Method HandleScoreDidChangeRealtime addr 0x23c31ac size 0x4 virtual false final false
inline void HandleScoreDidChangeRealtime(int32_t  multipliedScore, int32_t  modifiedScore) ;

/// @brief Method UpdateScore addr 0x23c2f18 size 0x184 virtual false final false
inline void UpdateScore(int32_t  multipliedScore, int32_t  modifiedScore) ;

/// @brief Method Append000Number addr 0x23c31b0 size 0x60 virtual false final false
static inline void Append000Number(::System::Text::StringBuilder*  stringBuilder, int32_t  number) ;

static inline ::GlobalNamespace::ScoreUIController* New_ctor() ;

/// @brief Method .ctor addr 0x23c3210 size 0x70 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ScoreUIController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScoreUIController(ScoreUIController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScoreUIController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScoreUIController(ScoreUIController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ScoreUIController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreUIController, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScoreUIController__ScoreDisplayType, "", "ScoreUIController/ScoreDisplayType");
NEED_NO_BOX(::GlobalNamespace::ScoreUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreUIController*, "", "ScoreUIController");
NEED_NO_BOX(::GlobalNamespace::__ScoreUIController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScoreUIController__InitData*, "", "ScoreUIController/InitData");
