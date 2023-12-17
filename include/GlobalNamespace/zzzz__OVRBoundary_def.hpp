#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRBoundary)
namespace GlobalNamespace {
struct __OVRBoundary__BoundaryType;
}
namespace GlobalNamespace {
class OVRNativeBuffer;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct __OVRBoundary__Node;
}
namespace GlobalNamespace {
struct __OVRBoundary__BoundaryTestResult;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRBoundary__BoundaryType;
}
namespace GlobalNamespace {
struct __OVRBoundary__Node;
}
namespace GlobalNamespace {
class OVRBoundary;
}
namespace GlobalNamespace {
struct __OVRBoundary__BoundaryTestResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRBoundary__BoundaryType);
MARK_VAL_T(::GlobalNamespace::__OVRBoundary__Node);
MARK_REF_PTR_T(::GlobalNamespace::OVRBoundary);
MARK_VAL_T(::GlobalNamespace::__OVRBoundary__BoundaryTestResult);
// Type: ::Node
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7527))
// CS Name: ::OVRBoundary::Node
struct CORDL_TYPE __OVRBoundary__Node : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVRBoundary__Node_Unwrapped
enum struct ____OVRBoundary__Node_Unwrapped : int32_t {
__E_HandLeft = static_cast<int32_t>(0x3),
__E_HandRight = static_cast<int32_t>(0x4),
__E_Head = static_cast<int32_t>(0x9),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field HandLeft value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__OVRBoundary__Node const HandLeft;

/// @brief Field HandRight value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__OVRBoundary__Node const HandRight;

/// @brief Field Head value: static_cast<int32_t>(0x9)
static ::GlobalNamespace::__OVRBoundary__Node const Head;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVRBoundary__Node_Unwrapped () const noexcept {
return std::bit_cast<____OVRBoundary__Node_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRBoundary__Node(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRBoundary__Node(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRBoundary__Node()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRBoundary__Node, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BoundaryType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7528))
// CS Name: ::OVRBoundary::BoundaryType
struct CORDL_TYPE __OVRBoundary__BoundaryType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVRBoundary__BoundaryType_Unwrapped
enum struct ____OVRBoundary__BoundaryType_Unwrapped : int32_t {
__E_OuterBoundary = static_cast<int32_t>(0x1),
__E_PlayArea = static_cast<int32_t>(0x100),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field OuterBoundary value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OVRBoundary__BoundaryType const OuterBoundary;

/// @brief Field PlayArea value: static_cast<int32_t>(0x100)
static ::GlobalNamespace::__OVRBoundary__BoundaryType const PlayArea;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVRBoundary__BoundaryType_Unwrapped () const noexcept {
return std::bit_cast<____OVRBoundary__BoundaryType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRBoundary__BoundaryType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRBoundary__BoundaryType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRBoundary__BoundaryType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRBoundary__BoundaryType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BoundaryTestResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7529))
// CS Name: ::OVRBoundary::BoundaryTestResult
struct CORDL_TYPE __OVRBoundary__BoundaryTestResult : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field IsTriggering offset 0x0
 __declspec(property(get=__get_IsTriggering, put=__set_IsTriggering)) bool  IsTriggering;

/// @brief Field ClosestDistance offset 0x4
 __declspec(property(get=__get_ClosestDistance, put=__set_ClosestDistance)) float_t  ClosestDistance;

/// @brief Field ClosestPoint offset 0x8
 __declspec(property(get=__get_ClosestPoint, put=__set_ClosestPoint)) ::UnityEngine::Vector3  ClosestPoint;

/// @brief Field ClosestPointNormal offset 0x14
 __declspec(property(get=__get_ClosestPointNormal, put=__set_ClosestPointNormal)) ::UnityEngine::Vector3  ClosestPointNormal;

constexpr void __set_IsTriggering(bool  value) ;

constexpr bool& __get_IsTriggering() ;

constexpr bool const& __get_IsTriggering() const;

constexpr void __set_ClosestDistance(float_t  value) ;

constexpr float_t& __get_ClosestDistance() ;

constexpr float_t const& __get_ClosestDistance() const;

constexpr void __set_ClosestPoint(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_ClosestPoint() ;

constexpr ::UnityEngine::Vector3 const& __get_ClosestPoint() const;

constexpr void __set_ClosestPointNormal(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_ClosestPointNormal() ;

constexpr ::UnityEngine::Vector3 const& __get_ClosestPointNormal() const;

// Ctor Parameters [CppParam { name: "IsTriggering", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ClosestDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ClosestPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "ClosestPointNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr __OVRBoundary__BoundaryTestResult(bool  IsTriggering, float_t  ClosestDistance, ::UnityEngine::Vector3  ClosestPoint, ::UnityEngine::Vector3  ClosestPointNormal) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRBoundary__BoundaryTestResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRBoundary__BoundaryTestResult()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRBoundary__BoundaryTestResult, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRBoundary
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7530))
// CS Name: ::OVRBoundary*
class CORDL_TYPE OVRBoundary : public ::System::Object {
public:
// Declarations
using BoundaryTestResult = ::GlobalNamespace::__OVRBoundary__BoundaryTestResult;

using BoundaryType = ::GlobalNamespace::__OVRBoundary__BoundaryType;

using Node = ::GlobalNamespace::__OVRBoundary__Node;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field cachedGeometryList offset 0x10
 __declspec(property(get=__get_cachedGeometryList, put=__set_cachedGeometryList)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  cachedGeometryList;

static inline void setStaticF_cachedVector3fSize(int32_t  value) ;

static inline int32_t getStaticF_cachedVector3fSize() ;

static inline void setStaticF_cachedGeometryNativeBuffer(::GlobalNamespace::OVRNativeBuffer*  value) ;

static inline ::GlobalNamespace::OVRNativeBuffer* getStaticF_cachedGeometryNativeBuffer() ;

static inline void setStaticF_cachedGeometryManagedBuffer(::ArrayW<float_t,::Array<float_t>*>  value) ;

static inline ::ArrayW<float_t,::Array<float_t>*> getStaticF_cachedGeometryManagedBuffer() ;

constexpr void __set_cachedGeometryList(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* __get_cachedGeometryList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> __get_cachedGeometryList() const;

/// @brief Method GetConfigured addr 0x270d5bc size 0x98 virtual false final false
inline bool GetConfigured() ;

/// @brief Method TestNode addr 0x2715c3c size 0xc4 virtual false final false
inline ::GlobalNamespace::__OVRBoundary__BoundaryTestResult TestNode(::GlobalNamespace::__OVRBoundary__Node  node, ::GlobalNamespace::__OVRBoundary__BoundaryType  boundaryType) ;

/// @brief Method TestPoint addr 0x2715d00 size 0xe8 virtual false final false
inline ::GlobalNamespace::__OVRBoundary__BoundaryTestResult TestPoint(::UnityEngine::Vector3  point, ::GlobalNamespace::__OVRBoundary__BoundaryType  boundaryType) ;

/// @brief Method GetGeometry addr 0x270d654 size 0x43c virtual false final false
inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> GetGeometry(::GlobalNamespace::__OVRBoundary__BoundaryType  boundaryType) ;

/// @brief Method GetDimensions addr 0x2715e88 size 0xd0 virtual false final false
inline ::UnityEngine::Vector3 GetDimensions(::GlobalNamespace::__OVRBoundary__BoundaryType  boundaryType) ;

/// @brief Method GetVisible addr 0x2715f5c size 0x98 virtual false final false
inline bool GetVisible() ;

/// @brief Method SetVisible addr 0x2715ff4 size 0x9c virtual false final false
inline void SetVisible(bool  value) ;

static inline ::GlobalNamespace::OVRBoundary* New_ctor() ;

/// @brief Method .ctor addr 0x2716090 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRBoundary", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRBoundary(OVRBoundary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRBoundary", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRBoundary(OVRBoundary const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRBoundary()  = default;
public:


// Fields

// Static field cachedVector3fSize

// Static field cachedGeometryNativeBuffer

// Static field cachedGeometryManagedBuffer


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRBoundary, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRBoundary__BoundaryType, "", "OVRBoundary/BoundaryType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRBoundary__Node, "", "OVRBoundary/Node");
NEED_NO_BOX(::GlobalNamespace::OVRBoundary);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBoundary*, "", "OVRBoundary");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRBoundary__BoundaryTestResult, "", "OVRBoundary/BoundaryTestResult");
