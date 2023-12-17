#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsRaycasterWithCache)
namespace VRUIControls {
struct __PhysicsRaycasterWithCache__CachedRaycast;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Ray;
}
// Forward declare root types
namespace VRUIControls {
class PhysicsRaycasterWithCache;
}
namespace VRUIControls {
struct __PhysicsRaycasterWithCache__CachedRaycast;
}
// Write type traits
MARK_REF_PTR_T(::VRUIControls::PhysicsRaycasterWithCache);
MARK_VAL_T(::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast);
// Type: ::CachedRaycast
namespace VRUIControls {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15671))
// CS Name: ::PhysicsRaycasterWithCache::CachedRaycast
struct CORDL_TYPE __PhysicsRaycasterWithCache__CachedRaycast : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field wasHit offset 0x0
 __declspec(property(get=__get_wasHit, put=__set_wasHit)) bool  wasHit;

/// @brief Field ray offset 0x4
 __declspec(property(get=__get_ray, put=__set_ray)) ::UnityEngine::Ray  ray;

/// @brief Field hitInfo offset 0x1c
 __declspec(property(get=__get_hitInfo, put=__set_hitInfo)) ::UnityEngine::RaycastHit  hitInfo;

/// @brief Field maxDistance offset 0x48
 __declspec(property(get=__get_maxDistance, put=__set_maxDistance)) float_t  maxDistance;

/// @brief Field layerMask offset 0x4c
 __declspec(property(get=__get_layerMask, put=__set_layerMask)) int32_t  layerMask;

constexpr void __set_wasHit(bool  value) ;

constexpr bool& __get_wasHit() ;

constexpr bool const& __get_wasHit() const;

constexpr void __set_ray(::UnityEngine::Ray  value) ;

constexpr ::UnityEngine::Ray& __get_ray() ;

constexpr ::UnityEngine::Ray const& __get_ray() const;

constexpr void __set_hitInfo(::UnityEngine::RaycastHit  value) ;

constexpr ::UnityEngine::RaycastHit& __get_hitInfo() ;

constexpr ::UnityEngine::RaycastHit const& __get_hitInfo() const;

constexpr void __set_maxDistance(float_t  value) ;

constexpr float_t& __get_maxDistance() ;

constexpr float_t const& __get_maxDistance() const;

constexpr void __set_layerMask(int32_t  value) ;

constexpr int32_t& __get_layerMask() ;

constexpr int32_t const& __get_layerMask() const;

/// @brief Method .ctor addr 0x2eb4adc size 0x40 virtual false final false
inline void _ctor(bool  wasHit, ::UnityEngine::Ray  ray, ::UnityEngine::RaycastHit  hitInfo, float_t  maxDistance, int32_t  layerMask) ;

// Ctor Parameters [CppParam { name: "wasHit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ray", ty: "::UnityEngine::Ray", modifiers: "", def_value: None }, CppParam { name: "hitInfo", ty: "::UnityEngine::RaycastHit", modifiers: "", def_value: None }, CppParam { name: "maxDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "layerMask", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __PhysicsRaycasterWithCache__CachedRaycast(bool  wasHit, ::UnityEngine::Ray  ray, ::UnityEngine::RaycastHit  hitInfo, float_t  maxDistance, int32_t  layerMask) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PhysicsRaycasterWithCache__CachedRaycast(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PhysicsRaycasterWithCache__CachedRaycast()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast, 0x50>, "Size mismatch!");

} // namespace end def VRUIControls
// Type: VRUIControls::PhysicsRaycasterWithCache
namespace VRUIControls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15672))
// CS Name: ::VRUIControls::PhysicsRaycasterWithCache*
class CORDL_TYPE PhysicsRaycasterWithCache : public ::System::Object {
public:
// Declarations
using CachedRaycast = ::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _cachedRaycasts offset 0x10
 __declspec(property(get=__get__cachedRaycasts, put=__set__cachedRaycasts)) ::System::Collections::Generic::List_1<::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast>*  _cachedRaycasts;

/// @brief Field _lastFrameCount offset 0x18
 __declspec(property(get=__get__lastFrameCount, put=__set__lastFrameCount)) int32_t  _lastFrameCount;

constexpr void __set__cachedRaycasts(::System::Collections::Generic::List_1<::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast>*  value) ;

constexpr ::System::Collections::Generic::List_1<::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast>* __get__cachedRaycasts() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast>*> __get__cachedRaycasts() const;

constexpr void __set__lastFrameCount(int32_t  value) ;

constexpr int32_t& __get__lastFrameCount() ;

constexpr int32_t const& __get__lastFrameCount() const;

/// @brief Method Raycast addr 0x2eb4570 size 0x56c virtual false final false
inline bool Raycast(::UnityEngine::Ray  ray, ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask) ;

static inline ::VRUIControls::PhysicsRaycasterWithCache* New_ctor() ;

/// @brief Method .ctor addr 0x2eb4b1c size 0x84 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsRaycasterWithCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhysicsRaycasterWithCache(PhysicsRaycasterWithCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsRaycasterWithCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhysicsRaycasterWithCache(PhysicsRaycasterWithCache const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PhysicsRaycasterWithCache()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::PhysicsRaycasterWithCache, 0x20>, "Size mismatch!");

} // namespace end def VRUIControls
NEED_NO_BOX(::VRUIControls::PhysicsRaycasterWithCache);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::PhysicsRaycasterWithCache*, "VRUIControls", "PhysicsRaycasterWithCache");
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast, "VRUIControls", "PhysicsRaycasterWithCache/CachedRaycast");
