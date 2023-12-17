#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RaycastResult)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::EventSystems {
class BaseRaycaster;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
// Write type traits
MARK_VAL_T(::UnityEngine::EventSystems::RaycastResult);
// Type: UnityEngine.EventSystems::RaycastResult
namespace UnityEngine::EventSystems {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13213))
// CS Name: ::UnityEngine.EventSystems::RaycastResult
struct CORDL_TYPE RaycastResult : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field m_GameObject offset 0x0
 __declspec(property(get=__get_m_GameObject, put=__set_m_GameObject)) ::UnityEngine::GameObject*  m_GameObject;

/// @brief Field module offset 0x8
 __declspec(property(get=__get_module, put=__set_module)) ::UnityEngine::EventSystems::BaseRaycaster*  module;

/// @brief Field distance offset 0x10
 __declspec(property(get=__get_distance, put=__set_distance)) float_t  distance;

/// @brief Field index offset 0x14
 __declspec(property(get=__get_index, put=__set_index)) float_t  index;

/// @brief Field depth offset 0x18
 __declspec(property(get=__get_depth, put=__set_depth)) int32_t  depth;

/// @brief Field sortingLayer offset 0x1c
 __declspec(property(get=__get_sortingLayer, put=__set_sortingLayer)) int32_t  sortingLayer;

/// @brief Field sortingOrder offset 0x20
 __declspec(property(get=__get_sortingOrder, put=__set_sortingOrder)) int32_t  sortingOrder;

/// @brief Field worldPosition offset 0x24
 __declspec(property(get=__get_worldPosition, put=__set_worldPosition)) ::UnityEngine::Vector3  worldPosition;

/// @brief Field worldNormal offset 0x30
 __declspec(property(get=__get_worldNormal, put=__set_worldNormal)) ::UnityEngine::Vector3  worldNormal;

/// @brief Field screenPosition offset 0x3c
 __declspec(property(get=__get_screenPosition, put=__set_screenPosition)) ::UnityEngine::Vector2  screenPosition;

/// @brief Field displayIndex offset 0x44
 __declspec(property(get=__get_displayIndex, put=__set_displayIndex)) int32_t  displayIndex;

 __declspec(property(get=get_gameObject, put=set_gameObject)) ::UnityEngine::GameObject*  gameObject;

 __declspec(property(get=get_isValid)) bool  isValid;

constexpr void __set_m_GameObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get_m_GameObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get_m_GameObject() const;

constexpr void __set_module(::UnityEngine::EventSystems::BaseRaycaster*  value) ;

constexpr ::UnityEngine::EventSystems::BaseRaycaster* __get_module() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::BaseRaycaster*> __get_module() const;

constexpr void __set_distance(float_t  value) ;

constexpr float_t& __get_distance() ;

constexpr float_t const& __get_distance() const;

constexpr void __set_index(float_t  value) ;

constexpr float_t& __get_index() ;

constexpr float_t const& __get_index() const;

constexpr void __set_depth(int32_t  value) ;

constexpr int32_t& __get_depth() ;

constexpr int32_t const& __get_depth() const;

constexpr void __set_sortingLayer(int32_t  value) ;

constexpr int32_t& __get_sortingLayer() ;

constexpr int32_t const& __get_sortingLayer() const;

constexpr void __set_sortingOrder(int32_t  value) ;

constexpr int32_t& __get_sortingOrder() ;

constexpr int32_t const& __get_sortingOrder() const;

constexpr void __set_worldPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_worldPosition() ;

constexpr ::UnityEngine::Vector3 const& __get_worldPosition() const;

constexpr void __set_worldNormal(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_worldNormal() ;

constexpr ::UnityEngine::Vector3 const& __get_worldNormal() const;

constexpr void __set_screenPosition(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_screenPosition() ;

constexpr ::UnityEngine::Vector2 const& __get_screenPosition() const;

constexpr void __set_displayIndex(int32_t  value) ;

constexpr int32_t& __get_displayIndex() ;

constexpr int32_t const& __get_displayIndex() const;

/// @brief Method get_gameObject addr 0x2da13fc size 0x8 virtual false final false
inline ::UnityEngine::GameObject* get_gameObject() ;

/// @brief Method set_gameObject addr 0x2da1404 size 0x8 virtual false final false
inline void set_gameObject(::UnityEngine::GameObject*  value) ;

/// @brief Method get_isValid addr 0x2da140c size 0x98 virtual false final false
inline bool get_isValid() ;

/// @brief Method Clear addr 0x2da14a4 size 0xa4 virtual false final false
inline void Clear() ;

/// @brief Method ToString addr 0x2d96204 size 0x6d8 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_GameObject", ty: "::UnityEngine::GameObject*", modifiers: "", def_value: None }, CppParam { name: "module", ty: "::UnityEngine::EventSystems::BaseRaycaster*", modifiers: "", def_value: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "index", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sortingLayer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sortingOrder", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "worldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "worldNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "screenPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "displayIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RaycastResult(::UnityEngine::GameObject*  m_GameObject, ::UnityEngine::EventSystems::BaseRaycaster*  module, float_t  distance, float_t  index, int32_t  depth, int32_t  sortingLayer, int32_t  sortingOrder, ::UnityEngine::Vector3  worldPosition, ::UnityEngine::Vector3  worldNormal, ::UnityEngine::Vector2  screenPosition, int32_t  displayIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RaycastResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RaycastResult()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::RaycastResult, 0x48>, "Size mismatch!");

} // namespace end def UnityEngine::EventSystems
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::RaycastResult, "UnityEngine.EventSystems", "RaycastResult");
