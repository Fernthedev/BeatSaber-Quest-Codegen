#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SaberModelController)
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class SaberTrail;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class __SaberModelController__InitData;
}
namespace GlobalNamespace {
class SetSaberGlowColor;
}
namespace GlobalNamespace {
class SetSaberFakeGlowColor;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberModelController;
}
namespace GlobalNamespace {
class __SaberModelController__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberModelController);
MARK_REF_PTR_T(::GlobalNamespace::__SaberModelController__InitData);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5298))
// CS Name: ::SaberModelController::InitData*
class CORDL_TYPE __SaberModelController__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field trailTintColor offset 0x10
 __declspec(property(get=__get_trailTintColor, put=__set_trailTintColor)) ::UnityEngine::Color  trailTintColor;

constexpr void __set_trailTintColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_trailTintColor() ;

constexpr ::UnityEngine::Color const& __get_trailTintColor() const;

static inline ::GlobalNamespace::__SaberModelController__InitData* New_ctor() ;

/// @brief Method .ctor addr 0x226452c size 0x20 virtual false final false
inline void _ctor() ;

static inline ::GlobalNamespace::__SaberModelController__InitData* New_ctor(::UnityEngine::Color  trailTintColor) ;

/// @brief Method .ctor addr 0x226454c size 0x40 virtual false final false
inline void _ctor(::UnityEngine::Color  trailTintColor) ;

// Ctor Parameters [CppParam { name: "", ty: "__SaberModelController__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SaberModelController__InitData(__SaberModelController__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SaberModelController__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SaberModelController__InitData(__SaberModelController__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SaberModelController__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SaberModelController__InitData, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SaberModelController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5299))
// CS Name: ::SaberModelController*
class CORDL_TYPE SaberModelController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = ::GlobalNamespace::__SaberModelController__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _saberTrail offset 0x18
 __declspec(property(get=__get__saberTrail, put=__set__saberTrail)) ::GlobalNamespace::SaberTrail*  _saberTrail;

/// @brief Field _setSaberGlowColors offset 0x20
 __declspec(property(get=__get__setSaberGlowColors, put=__set__setSaberGlowColors)) ::ArrayW<::GlobalNamespace::SetSaberGlowColor*,::Array<::GlobalNamespace::SetSaberGlowColor*>*>  _setSaberGlowColors;

/// @brief Field _setSaberFakeGlowColors offset 0x28
 __declspec(property(get=__get__setSaberFakeGlowColors, put=__set__setSaberFakeGlowColors)) ::ArrayW<::GlobalNamespace::SetSaberFakeGlowColor*,::Array<::GlobalNamespace::SetSaberFakeGlowColor*>*>  _setSaberFakeGlowColors;

/// @brief Field _saberLight offset 0x30
 __declspec(property(get=__get__saberLight, put=__set__saberLight)) ::GlobalNamespace::TubeBloomPrePassLight*  _saberLight;

/// @brief Field _initData offset 0x38
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__SaberModelController__InitData*  _initData;

/// @brief Field _colorManager offset 0x40
 __declspec(property(get=__get__colorManager, put=__set__colorManager)) ::GlobalNamespace::ColorManager*  _colorManager;

constexpr void __set__saberTrail(::GlobalNamespace::SaberTrail*  value) ;

constexpr ::GlobalNamespace::SaberTrail* __get__saberTrail() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberTrail*> __get__saberTrail() const;

constexpr void __set__setSaberGlowColors(::ArrayW<::GlobalNamespace::SetSaberGlowColor*,::Array<::GlobalNamespace::SetSaberGlowColor*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::SetSaberGlowColor*,::Array<::GlobalNamespace::SetSaberGlowColor*>*>& __get__setSaberGlowColors() ;

constexpr ::ArrayW<::GlobalNamespace::SetSaberGlowColor*,::Array<::GlobalNamespace::SetSaberGlowColor*>*> const& __get__setSaberGlowColors() const;

constexpr void __set__setSaberFakeGlowColors(::ArrayW<::GlobalNamespace::SetSaberFakeGlowColor*,::Array<::GlobalNamespace::SetSaberFakeGlowColor*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::SetSaberFakeGlowColor*,::Array<::GlobalNamespace::SetSaberFakeGlowColor*>*>& __get__setSaberFakeGlowColors() ;

constexpr ::ArrayW<::GlobalNamespace::SetSaberFakeGlowColor*,::Array<::GlobalNamespace::SetSaberFakeGlowColor*>*> const& __get__setSaberFakeGlowColors() const;

constexpr void __set__saberLight(::GlobalNamespace::TubeBloomPrePassLight*  value) ;

constexpr ::GlobalNamespace::TubeBloomPrePassLight* __get__saberLight() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeBloomPrePassLight*> __get__saberLight() const;

constexpr void __set__initData(::GlobalNamespace::__SaberModelController__InitData*  value) ;

constexpr ::GlobalNamespace::__SaberModelController__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SaberModelController__InitData*> __get__initData() const;

constexpr void __set__colorManager(::GlobalNamespace::ColorManager*  value) ;

constexpr ::GlobalNamespace::ColorManager* __get__colorManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> __get__colorManager() const;

/// @brief Method Init addr 0x22641ac size 0x2f0 virtual false final false
inline void Init(::UnityEngine::Transform*  parent, ::GlobalNamespace::Saber*  saber) ;

static inline ::GlobalNamespace::SaberModelController* New_ctor() ;

/// @brief Method .ctor addr 0x22644bc size 0x70 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SaberModelController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaberModelController(SaberModelController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaberModelController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaberModelController(SaberModelController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SaberModelController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberModelController, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberModelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberModelController*, "", "SaberModelController");
NEED_NO_BOX(::GlobalNamespace::__SaberModelController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SaberModelController__InitData*, "", "SaberModelController/InitData");
