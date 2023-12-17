#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SafeAreaRectChecker)
namespace UnityEngine {
class RectTransform;
}
namespace GlobalNamespace {
class MainCamera;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class __SafeAreaRectChecker__InitData;
}
// Forward declare root types
namespace GlobalNamespace {
class SafeAreaRectChecker;
}
namespace GlobalNamespace {
class __SafeAreaRectChecker__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SafeAreaRectChecker);
MARK_REF_PTR_T(::GlobalNamespace::__SafeAreaRectChecker__InitData);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5434))
// CS Name: ::SafeAreaRectChecker::InitData*
class CORDL_TYPE __SafeAreaRectChecker__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field checkingEnabled offset 0x10
 __declspec(property(get=__get_checkingEnabled, put=__set_checkingEnabled)) bool  checkingEnabled;

constexpr void __set_checkingEnabled(bool  value) ;

constexpr bool& __get_checkingEnabled() ;

constexpr bool const& __get_checkingEnabled() const;

static inline ::GlobalNamespace::__SafeAreaRectChecker__InitData* New_ctor(bool  checkingEnabled) ;

/// @brief Method .ctor addr 0x227c68c size 0x28 virtual false final false
inline void _ctor(bool  checkingEnabled) ;

// Ctor Parameters [CppParam { name: "", ty: "__SafeAreaRectChecker__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SafeAreaRectChecker__InitData(__SafeAreaRectChecker__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SafeAreaRectChecker__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SafeAreaRectChecker__InitData(__SafeAreaRectChecker__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SafeAreaRectChecker__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SafeAreaRectChecker__InitData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SafeAreaRectChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5435))
// CS Name: ::SafeAreaRectChecker*
class CORDL_TYPE SafeAreaRectChecker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = ::GlobalNamespace::__SafeAreaRectChecker__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _minAngleX offset 0x18
 __declspec(property(get=__get__minAngleX, put=__set__minAngleX)) float_t  _minAngleX;

/// @brief Field _maxAngleX offset 0x1c
 __declspec(property(get=__get__maxAngleX, put=__set__maxAngleX)) float_t  _maxAngleX;

/// @brief Field _minAngleY offset 0x20
 __declspec(property(get=__get__minAngleY, put=__set__minAngleY)) float_t  _minAngleY;

/// @brief Field _maxAngleY offset 0x24
 __declspec(property(get=__get__maxAngleY, put=__set__maxAngleY)) float_t  _maxAngleY;

/// @brief Field _activeObjectWhenInsideSafeArea offset 0x28
 __declspec(property(get=__get__activeObjectWhenInsideSafeArea, put=__set__activeObjectWhenInsideSafeArea)) ::UnityEngine::GameObject*  _activeObjectWhenInsideSafeArea;

/// @brief Field _activeObjectWhenNotInsideSafeArea offset 0x30
 __declspec(property(get=__get__activeObjectWhenNotInsideSafeArea, put=__set__activeObjectWhenNotInsideSafeArea)) ::UnityEngine::GameObject*  _activeObjectWhenNotInsideSafeArea;

/// @brief Field _rectTransformToCheck offset 0x38
 __declspec(property(get=__get__rectTransformToCheck, put=__set__rectTransformToCheck)) ::UnityEngine::RectTransform*  _rectTransformToCheck;

/// @brief Field _corners offset 0x40
 __declspec(property(get=__get__corners, put=__set__corners)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _corners;

/// @brief Field _mainCamera offset 0x48
 __declspec(property(get=__get__mainCamera, put=__set__mainCamera)) ::GlobalNamespace::MainCamera*  _mainCamera;

/// @brief Field _initData offset 0x50
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__SafeAreaRectChecker__InitData*  _initData;

constexpr void __set__minAngleX(float_t  value) ;

constexpr float_t& __get__minAngleX() ;

constexpr float_t const& __get__minAngleX() const;

constexpr void __set__maxAngleX(float_t  value) ;

constexpr float_t& __get__maxAngleX() ;

constexpr float_t const& __get__maxAngleX() const;

constexpr void __set__minAngleY(float_t  value) ;

constexpr float_t& __get__minAngleY() ;

constexpr float_t const& __get__minAngleY() const;

constexpr void __set__maxAngleY(float_t  value) ;

constexpr float_t& __get__maxAngleY() ;

constexpr float_t const& __get__maxAngleY() const;

constexpr void __set__activeObjectWhenInsideSafeArea(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__activeObjectWhenInsideSafeArea() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__activeObjectWhenInsideSafeArea() const;

constexpr void __set__activeObjectWhenNotInsideSafeArea(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__activeObjectWhenNotInsideSafeArea() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__activeObjectWhenNotInsideSafeArea() const;

constexpr void __set__rectTransformToCheck(::UnityEngine::RectTransform*  value) ;

constexpr ::UnityEngine::RectTransform* __get__rectTransformToCheck() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> __get__rectTransformToCheck() const;

constexpr void __set__corners(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __get__corners() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __get__corners() const;

constexpr void __set__mainCamera(::GlobalNamespace::MainCamera*  value) ;

constexpr ::GlobalNamespace::MainCamera* __get__mainCamera() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainCamera*> __get__mainCamera() const;

constexpr void __set__initData(::GlobalNamespace::__SafeAreaRectChecker__InitData*  value) ;

constexpr ::GlobalNamespace::__SafeAreaRectChecker__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SafeAreaRectChecker__InitData*> __get__initData() const;

/// @brief Method Start addr 0x227c3d8 size 0x64 virtual false final false
inline void Start() ;

/// @brief Method Update addr 0x227c43c size 0x1ec virtual false final false
inline void Update() ;

static inline ::GlobalNamespace::SafeAreaRectChecker* New_ctor() ;

/// @brief Method .ctor addr 0x227c628 size 0x64 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SafeAreaRectChecker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeAreaRectChecker(SafeAreaRectChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeAreaRectChecker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeAreaRectChecker(SafeAreaRectChecker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SafeAreaRectChecker()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SafeAreaRectChecker, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SafeAreaRectChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SafeAreaRectChecker*, "", "SafeAreaRectChecker");
NEED_NO_BOX(::GlobalNamespace::__SafeAreaRectChecker__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SafeAreaRectChecker__InitData*, "", "SafeAreaRectChecker/InitData");
