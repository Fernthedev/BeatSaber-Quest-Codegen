#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeArray_1)
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Object;
}
namespace Unity::Collections {
struct Allocator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace Unity::Collections {
template<typename T>
struct __NativeArray_1__Enumerator;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceQueryResult;
}
namespace System::Collections {
class IEnumerable;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector2f;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector3f;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector4f;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector4s;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__Triangle;
}
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
struct BoneWeight1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightDataGI;
}
namespace UnityEngine {
struct ModifiableContactPair;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine::Rendering {
struct BatchVisibility;
}
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
namespace UnityEngine::Tilemaps {
struct TileData;
}
namespace UnityEngine::UIElements {
struct TextVertex;
}
namespace UnityEngine::UIElements::UIR {
struct DrawBufferRange;
}
namespace UnityEngine::UIElements::UIR {
struct GfxUpdateBufferRange;
}
namespace UnityEngine::UIElements::UIR {
struct Transform3x4;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct __NativeArray_1__Enumerator;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::UnityEngine::BoneWeight>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::UnityEngine::BoneWeight1>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::UnityEngine::Color>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::UnityEngine::Color32>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::UnityEngine::ModifiableContactPair>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::UnityEngine::Plane>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::UnityEngine::Rendering::BatchVisibility>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::UnityEngine::Tilemaps::TileData>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::UnityEngine::UIElements::TextVertex>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::UnityEngine::UIElements::Vertex>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::UnityEngine::Vector2>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::UnityEngine::Vector3>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::UnityEngine::Vector3Int>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<::UnityEngine::Vector4>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<int16_t>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<int32_t>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<uint16_t>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<uint32_t>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<uint64_t>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<uint8_t>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::GlobalNamespace::__OVRPlugin__Vector2f>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::GlobalNamespace::__OVRPlugin__Vector3f>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::GlobalNamespace::__OVRPlugin__Vector4f>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::GlobalNamespace::__OVRPlugin__Vector4s>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::GlobalNamespace::__OVRTriangleMesh__Triangle>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::UnityEngine::BoneWeight>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::UnityEngine::BoneWeight1>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::UnityEngine::Color>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::UnityEngine::Color32>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::UnityEngine::ModifiableContactPair>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::UnityEngine::Plane>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::UnityEngine::Rendering::BatchVisibility>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::UnityEngine::Rendering::VertexAttributeDescriptor>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::UnityEngine::Tilemaps::TileData>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::UnityEngine::UIElements::TextVertex>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::UnityEngine::UIElements::UIR::DrawBufferRange>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::UnityEngine::UIElements::UIR::Transform3x4>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::UnityEngine::UIElements::Vertex>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::UnityEngine::Vector2>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::UnityEngine::Vector3>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::UnityEngine::Vector3Int>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<::UnityEngine::Vector4>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<int16_t>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<int32_t>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<uint16_t>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<uint32_t>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<uint64_t>;
}
namespace Unity::Collections {
template<>
struct __NativeArray_1__Enumerator<uint8_t>;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::NativeArray_1);
MARK_GEN_VAL_T(::Unity::Collections::__NativeArray_1__Enumerator);
// Type: ::Enumerator
// Type: Unity.Collections::NativeArray`1
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 763 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::GlobalNamespace::__OVRTriangleMesh__Triangle> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::GlobalNamespace::__OVRTriangleMesh__Triangle  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::__OVRTriangleMesh__Triangle get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 762 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::GlobalNamespace::__OVRPlugin__Vector4s> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::GlobalNamespace::__OVRPlugin__Vector4s  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRPlugin__Vector4s>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRPlugin__Vector4s>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::__OVRPlugin__Vector4s get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 761 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::GlobalNamespace::__OVRPlugin__Vector4f> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::GlobalNamespace::__OVRPlugin__Vector4f  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRPlugin__Vector4f>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRPlugin__Vector4f>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::__OVRPlugin__Vector4f get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 760 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::GlobalNamespace::__OVRPlugin__Vector3f> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::GlobalNamespace::__OVRPlugin__Vector3f  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRPlugin__Vector3f>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRPlugin__Vector3f>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::__OVRPlugin__Vector3f get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 759 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::GlobalNamespace::__OVRPlugin__Vector2f> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::GlobalNamespace::__OVRPlugin__Vector2f  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRPlugin__Vector2f>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRPlugin__Vector2f>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::__OVRPlugin__Vector2f get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 758 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::GlobalNamespace::__OVRPlugin__SpaceQueryResult> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::GlobalNamespace::__OVRPlugin__SpaceQueryResult  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::__OVRPlugin__SpaceQueryResult get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 757 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::UnityEngine::Rendering::VertexAttributeDescriptor> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::Rendering::VertexAttributeDescriptor  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Rendering::VertexAttributeDescriptor>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Rendering::VertexAttributeDescriptor>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Rendering::VertexAttributeDescriptor get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 756 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::UnityEngine::UIElements::Vertex> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::UIElements::Vertex  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::Vertex>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::Vertex>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::UIElements::Vertex get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 755 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::UnityEngine::Vector4> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::Vector4  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector4>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector4>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Vector4 get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 754 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::UnityEngine::Vector3Int> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::Vector3Int  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector3Int>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector3Int>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Vector3Int get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 753 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<uint32_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<uint32_t>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) uint32_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<uint32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<uint32_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<uint32_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<uint32_t>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<uint32_t> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<uint32_t>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline uint32_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<uint32_t>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 752 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<uint16_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<uint16_t>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) uint16_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<uint16_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<uint16_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<uint16_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<uint16_t>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<uint16_t> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<uint16_t>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline uint16_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<uint16_t>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 751 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::UnityEngine::UIElements::UIR::Transform3x4> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::UIElements::UIR::Transform3x4  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UIR::Transform3x4>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UIR::Transform3x4>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::UIElements::UIR::Transform3x4 get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 750 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::UnityEngine::Tilemaps::TileData> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::Tilemaps::TileData  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Tilemaps::TileData>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Tilemaps::TileData>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Tilemaps::TileData get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 749 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::UnityEngine::UIElements::TextVertex> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::UIElements::TextVertex  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::TextVertex>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::TextVertex>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::UIElements::TextVertex get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 748 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::UnityEngine::Plane> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::Plane  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Plane>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Plane>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Plane get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Plane>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 747 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::UnityEngine::ModifiableContactPair> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::ModifiableContactPair  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::ModifiableContactPair>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ModifiableContactPair>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ModifiableContactPair get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 746 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::UnityEngine::Experimental::GlobalIllumination::LightDataGI> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::Experimental::GlobalIllumination::LightDataGI  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Experimental::GlobalIllumination::LightDataGI get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 745 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<int16_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<int16_t>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) int16_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int16_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int16_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<int16_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<int16_t>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<int16_t> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<int16_t>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline int16_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<int16_t>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 744 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::UIElements::UIR::GfxUpdateBufferRange  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::UIElements::UIR::GfxUpdateBufferRange get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 743 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::UnityEngine::UIElements::UIR::DrawBufferRange> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::UIElements::UIR::DrawBufferRange  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UIR::DrawBufferRange>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UIR::DrawBufferRange>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::UIElements::UIR::DrawBufferRange get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 742 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::UnityEngine::Color32> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::Color32  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Color32>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Color32>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Color32> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Color32>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Color32 get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 741 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<uint8_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<uint8_t>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) uint8_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<uint8_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<uint8_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<uint8_t>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline uint8_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<uint8_t>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 740 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::UnityEngine::BoneWeight1> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::BoneWeight1  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::BoneWeight1>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::BoneWeight1>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::BoneWeight1 get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 739 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::UnityEngine::BoneWeight> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::BoneWeight  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::BoneWeight>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::BoneWeight>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::BoneWeight get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 738 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::UnityEngine::Rendering::BatchVisibility> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::Rendering::BatchVisibility  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Rendering::BatchVisibility>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Rendering::BatchVisibility>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Rendering::BatchVisibility get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 412 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::UnityEngine::Vector3> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::Vector3  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector3>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector3>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Vector3 get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 411 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::UnityEngine::Vector2> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::Vector2  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector2>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector2>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Vector2 get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 407 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<uint64_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<uint64_t>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) uint64_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<uint64_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<uint64_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<uint64_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<uint64_t>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<uint64_t> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<uint64_t>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline uint64_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<uint64_t>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 293 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<::UnityEngine::Color> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::Color  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Color>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Color>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<::UnityEngine::Color>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Color>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Color> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Color>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Color get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Color>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<::UnityEngine::Color>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9998))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9998), inst: 98 })
// CS Name: ::NativeArray`1::Enumerator<T>
struct CORDL_TYPE __NativeArray_1__Enumerator<int32_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeArray_1<int32_t>  m_Array;

/// @brief Field m_Index offset 0x10
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) int32_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_Array(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeArray_1<int32_t>>  array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeArray_1__Enumerator(::Unity::Collections::NativeArray_1<int32_t>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeArray_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeArray_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 763 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::GlobalNamespace::__OVRTriangleMesh__Triangle>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::GlobalNamespace::__OVRTriangleMesh__Triangle  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::GlobalNamespace::__OVRTriangleMesh__Triangle,::Array<::GlobalNamespace::__OVRTriangleMesh__Triangle>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRTriangleMesh__Triangle get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::GlobalNamespace::__OVRTriangleMesh__Triangle  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::GlobalNamespace::__OVRTriangleMesh__Triangle,::Array<::GlobalNamespace::__OVRTriangleMesh__Triangle>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::GlobalNamespace::__OVRTriangleMesh__Triangle,::Array<::GlobalNamespace::__OVRTriangleMesh__Triangle>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::GlobalNamespace::__OVRTriangleMesh__Triangle> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  src, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::GlobalNamespace::__OVRTriangleMesh__Triangle,::Array<::GlobalNamespace::__OVRTriangleMesh__Triangle>*>  src, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  src, ::ArrayW<::GlobalNamespace::__OVRTriangleMesh__Triangle,::Array<::GlobalNamespace::__OVRTriangleMesh__Triangle>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  src, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  src, ::ArrayW<::GlobalNamespace::__OVRTriangleMesh__Triangle,::Array<::GlobalNamespace::__OVRTriangleMesh__Triangle>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::GlobalNamespace::__OVRTriangleMesh__Triangle,::Array<::GlobalNamespace::__OVRTriangleMesh__Triangle>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  src, int32_t  srcIndex, ::ArrayW<::GlobalNamespace::__OVRTriangleMesh__Triangle,::Array<::GlobalNamespace::__OVRTriangleMesh__Triangle>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 762 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::GlobalNamespace::__OVRPlugin__Vector4s>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::GlobalNamespace::__OVRPlugin__Vector4s  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRPlugin__Vector4s>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRPlugin__Vector4s>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4s,::Array<::GlobalNamespace::__OVRPlugin__Vector4s>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRPlugin__Vector4s get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::GlobalNamespace::__OVRPlugin__Vector4s  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4s,::Array<::GlobalNamespace::__OVRPlugin__Vector4s>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4s,::Array<::GlobalNamespace::__OVRPlugin__Vector4s>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::GlobalNamespace::__OVRPlugin__Vector4s> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRPlugin__Vector4s>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  src, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4s,::Array<::GlobalNamespace::__OVRPlugin__Vector4s>*>  src, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  src, ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4s,::Array<::GlobalNamespace::__OVRPlugin__Vector4s>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  src, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  src, ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4s,::Array<::GlobalNamespace::__OVRPlugin__Vector4s>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4s,::Array<::GlobalNamespace::__OVRPlugin__Vector4s>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4s>  src, int32_t  srcIndex, ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4s,::Array<::GlobalNamespace::__OVRPlugin__Vector4s>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 761 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::GlobalNamespace::__OVRPlugin__Vector4f>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::GlobalNamespace::__OVRPlugin__Vector4f  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRPlugin__Vector4f>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRPlugin__Vector4f>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4f,::Array<::GlobalNamespace::__OVRPlugin__Vector4f>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRPlugin__Vector4f get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::GlobalNamespace::__OVRPlugin__Vector4f  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4f,::Array<::GlobalNamespace::__OVRPlugin__Vector4f>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4f,::Array<::GlobalNamespace::__OVRPlugin__Vector4f>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::GlobalNamespace::__OVRPlugin__Vector4f> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRPlugin__Vector4f>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  src, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4f,::Array<::GlobalNamespace::__OVRPlugin__Vector4f>*>  src, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  src, ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4f,::Array<::GlobalNamespace::__OVRPlugin__Vector4f>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  src, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  src, ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4f,::Array<::GlobalNamespace::__OVRPlugin__Vector4f>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4f,::Array<::GlobalNamespace::__OVRPlugin__Vector4f>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector4f>  src, int32_t  srcIndex, ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4f,::Array<::GlobalNamespace::__OVRPlugin__Vector4f>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 760 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::GlobalNamespace::__OVRPlugin__Vector3f>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::GlobalNamespace::__OVRPlugin__Vector3f  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRPlugin__Vector3f>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRPlugin__Vector3f>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f,::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRPlugin__Vector3f get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::GlobalNamespace::__OVRPlugin__Vector3f  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f,::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f,::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::GlobalNamespace::__OVRPlugin__Vector3f> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRPlugin__Vector3f>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  src, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f,::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*>  src, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  src, ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f,::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  src, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  src, ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f,::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f,::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector3f>  src, int32_t  srcIndex, ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f,::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 759 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::GlobalNamespace::__OVRPlugin__Vector2f>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::GlobalNamespace::__OVRPlugin__Vector2f  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRPlugin__Vector2f>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRPlugin__Vector2f>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector2f,::Array<::GlobalNamespace::__OVRPlugin__Vector2f>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRPlugin__Vector2f get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::GlobalNamespace::__OVRPlugin__Vector2f  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector2f,::Array<::GlobalNamespace::__OVRPlugin__Vector2f>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector2f,::Array<::GlobalNamespace::__OVRPlugin__Vector2f>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::GlobalNamespace::__OVRPlugin__Vector2f> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRPlugin__Vector2f>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  src, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector2f,::Array<::GlobalNamespace::__OVRPlugin__Vector2f>*>  src, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  src, ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector2f,::Array<::GlobalNamespace::__OVRPlugin__Vector2f>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  src, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  src, ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector2f,::Array<::GlobalNamespace::__OVRPlugin__Vector2f>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector2f,::Array<::GlobalNamespace::__OVRPlugin__Vector2f>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__Vector2f>  src, int32_t  srcIndex, ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector2f,::Array<::GlobalNamespace::__OVRPlugin__Vector2f>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 758 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::GlobalNamespace::__OVRPlugin__SpaceQueryResult  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceQueryResult,::Array<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRPlugin__SpaceQueryResult get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::GlobalNamespace::__OVRPlugin__SpaceQueryResult  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceQueryResult,::Array<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceQueryResult,::Array<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::GlobalNamespace::__OVRPlugin__SpaceQueryResult> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>  src, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceQueryResult,::Array<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>*>  src, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>  src, ::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceQueryResult,::Array<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>  src, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>  src, ::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceQueryResult,::Array<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceQueryResult,::Array<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>  src, int32_t  srcIndex, ::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceQueryResult,::Array<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 757 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Rendering::VertexAttributeDescriptor>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::Rendering::VertexAttributeDescriptor  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::VertexAttributeDescriptor>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::VertexAttributeDescriptor>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Rendering::VertexAttributeDescriptor get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::Rendering::VertexAttributeDescriptor  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Rendering::VertexAttributeDescriptor> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Rendering::VertexAttributeDescriptor>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>  src, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>  src, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>  src, int32_t  srcIndex, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor,::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 756 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::UnityEngine::UIElements::Vertex> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::UIElements::Vertex>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::UIElements::Vertex  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Vertex>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Vertex>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::UIElements::Vertex,::Array<::UnityEngine::UIElements::Vertex>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::Vertex get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::UIElements::Vertex  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::UIElements::Vertex,::Array<::UnityEngine::UIElements::Vertex>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::UIElements::Vertex,::Array<::UnityEngine::UIElements::Vertex>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::UIElements::Vertex> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::Vertex>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::UIElements::Vertex,::Array<::UnityEngine::UIElements::Vertex>*>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  src, ::ArrayW<::UnityEngine::UIElements::Vertex,::Array<::UnityEngine::UIElements::Vertex>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  src, ::ArrayW<::UnityEngine::UIElements::Vertex,::Array<::UnityEngine::UIElements::Vertex>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::UIElements::Vertex,::Array<::UnityEngine::UIElements::Vertex>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  src, int32_t  srcIndex, ::ArrayW<::UnityEngine::UIElements::Vertex,::Array<::UnityEngine::UIElements::Vertex>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 755 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::UnityEngine::Vector4> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Vector4>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::Vector4  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector4>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector4>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector4 get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::Vector4  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Vector4> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector4>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  src, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  src, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  src, int32_t  srcIndex, ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 754 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::UnityEngine::Vector3Int> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Vector3Int>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::Vector3Int  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3Int>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3Int>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::Vector3Int,::Array<::UnityEngine::Vector3Int>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector3Int get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::Vector3Int  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::Vector3Int,::Array<::UnityEngine::Vector3Int>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::Vector3Int,::Array<::UnityEngine::Vector3Int>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Vector3Int> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector3Int>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Vector3Int,::Array<::UnityEngine::Vector3Int>*>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  src, ::ArrayW<::UnityEngine::Vector3Int,::Array<::UnityEngine::Vector3Int>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  src, ::ArrayW<::UnityEngine::Vector3Int,::Array<::UnityEngine::Vector3Int>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Vector3Int,::Array<::UnityEngine::Vector3Int>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  src, int32_t  srcIndex, ::ArrayW<::UnityEngine::Vector3Int,::Array<::UnityEngine::Vector3Int>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 753 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<uint32_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<uint32_t>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) uint32_t  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<uint32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<uint32_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<uint32_t>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<uint32_t>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<uint32_t,::Array<uint32_t>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<uint32_t>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, uint32_t  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<uint32_t>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<uint32_t,::Array<uint32_t>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<uint32_t,::Array<uint32_t>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<uint32_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<uint32_t>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<uint32_t>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint32_t>  src, ::Unity::Collections::NativeArray_1<uint32_t>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<uint32_t,::Array<uint32_t>*>  src, ::Unity::Collections::NativeArray_1<uint32_t>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint32_t>  src, ::ArrayW<uint32_t,::Array<uint32_t>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint32_t>  src, ::Unity::Collections::NativeArray_1<uint32_t>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint32_t>  src, ::ArrayW<uint32_t,::Array<uint32_t>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint32_t>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<uint32_t>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<uint32_t,::Array<uint32_t>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<uint32_t>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint32_t>  src, int32_t  srcIndex, ::ArrayW<uint32_t,::Array<uint32_t>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 752 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<uint16_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<uint16_t>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) uint16_t  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<uint16_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<uint16_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<uint16_t>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<uint16_t>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<uint16_t,::Array<uint16_t>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<uint16_t>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint16_t get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, uint16_t  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<uint16_t>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<uint16_t,::Array<uint16_t>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<uint16_t,::Array<uint16_t>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<uint16_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<uint16_t>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<uint16_t>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint16_t>  src, ::Unity::Collections::NativeArray_1<uint16_t>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<uint16_t,::Array<uint16_t>*>  src, ::Unity::Collections::NativeArray_1<uint16_t>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint16_t>  src, ::ArrayW<uint16_t,::Array<uint16_t>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint16_t>  src, ::Unity::Collections::NativeArray_1<uint16_t>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint16_t>  src, ::ArrayW<uint16_t,::Array<uint16_t>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint16_t>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<uint16_t>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<uint16_t,::Array<uint16_t>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<uint16_t>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint16_t>  src, int32_t  srcIndex, ::ArrayW<uint16_t,::Array<uint16_t>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 751 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::UIElements::UIR::Transform3x4>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::UIElements::UIR::Transform3x4  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UIR::Transform3x4>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UIR::Transform3x4>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::UIElements::UIR::Transform3x4,::Array<::UnityEngine::UIElements::UIR::Transform3x4>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::UIR::Transform3x4 get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::UIElements::UIR::Transform3x4  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::UIElements::UIR::Transform3x4,::Array<::UnityEngine::UIElements::UIR::Transform3x4>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::UIElements::UIR::Transform3x4,::Array<::UnityEngine::UIElements::UIR::Transform3x4>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::UIElements::UIR::Transform3x4> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UIR::Transform3x4>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::UIElements::UIR::Transform3x4,::Array<::UnityEngine::UIElements::UIR::Transform3x4>*>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  src, ::ArrayW<::UnityEngine::UIElements::UIR::Transform3x4,::Array<::UnityEngine::UIElements::UIR::Transform3x4>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  src, ::ArrayW<::UnityEngine::UIElements::UIR::Transform3x4,::Array<::UnityEngine::UIElements::UIR::Transform3x4>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::UIElements::UIR::Transform3x4,::Array<::UnityEngine::UIElements::UIR::Transform3x4>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  src, int32_t  srcIndex, ::ArrayW<::UnityEngine::UIElements::UIR::Transform3x4,::Array<::UnityEngine::UIElements::UIR::Transform3x4>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 750 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::UnityEngine::Tilemaps::TileData> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Tilemaps::TileData>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::Tilemaps::TileData  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Tilemaps::TileData>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Tilemaps::TileData>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::Tilemaps::TileData,::Array<::UnityEngine::Tilemaps::TileData>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Tilemaps::TileData get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::Tilemaps::TileData  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::Tilemaps::TileData,::Array<::UnityEngine::Tilemaps::TileData>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::Tilemaps::TileData,::Array<::UnityEngine::Tilemaps::TileData>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Tilemaps::TileData> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Tilemaps::TileData>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Tilemaps::TileData,::Array<::UnityEngine::Tilemaps::TileData>*>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>  src, ::ArrayW<::UnityEngine::Tilemaps::TileData,::Array<::UnityEngine::Tilemaps::TileData>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>  src, ::ArrayW<::UnityEngine::Tilemaps::TileData,::Array<::UnityEngine::Tilemaps::TileData>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Tilemaps::TileData,::Array<::UnityEngine::Tilemaps::TileData>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Tilemaps::TileData>  src, int32_t  srcIndex, ::ArrayW<::UnityEngine::Tilemaps::TileData,::Array<::UnityEngine::Tilemaps::TileData>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 749 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::UnityEngine::UIElements::TextVertex> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::UIElements::TextVertex>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::UIElements::TextVertex  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TextVertex>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TextVertex>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::UIElements::TextVertex,::Array<::UnityEngine::UIElements::TextVertex>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::TextVertex get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::UIElements::TextVertex  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::UIElements::TextVertex,::Array<::UnityEngine::UIElements::TextVertex>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::UIElements::TextVertex,::Array<::UnityEngine::UIElements::TextVertex>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::UIElements::TextVertex> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::TextVertex>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::UIElements::TextVertex,::Array<::UnityEngine::UIElements::TextVertex>*>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>  src, ::ArrayW<::UnityEngine::UIElements::TextVertex,::Array<::UnityEngine::UIElements::TextVertex>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>  src, ::ArrayW<::UnityEngine::UIElements::TextVertex,::Array<::UnityEngine::UIElements::TextVertex>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::UIElements::TextVertex,::Array<::UnityEngine::UIElements::TextVertex>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex>  src, int32_t  srcIndex, ::ArrayW<::UnityEngine::UIElements::TextVertex,::Array<::UnityEngine::UIElements::TextVertex>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 748 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::UnityEngine::Plane> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Plane>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::Plane  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Plane>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Plane>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::Plane,::Array<::UnityEngine::Plane>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Plane get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::Plane  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::Plane,::Array<::UnityEngine::Plane>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::Plane,::Array<::UnityEngine::Plane>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Plane> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Plane>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Plane,::Array<::UnityEngine::Plane>*>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  src, ::ArrayW<::UnityEngine::Plane,::Array<::UnityEngine::Plane>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  src, ::ArrayW<::UnityEngine::Plane,::Array<::UnityEngine::Plane>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Plane,::Array<::UnityEngine::Plane>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  src, int32_t  srcIndex, ::ArrayW<::UnityEngine::Plane,::Array<::UnityEngine::Plane>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 747 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::UnityEngine::ModifiableContactPair> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::ModifiableContactPair>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::ModifiableContactPair  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ModifiableContactPair>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ModifiableContactPair>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::ModifiableContactPair,::Array<::UnityEngine::ModifiableContactPair>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ModifiableContactPair get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::ModifiableContactPair  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::ModifiableContactPair,::Array<::UnityEngine::ModifiableContactPair>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::ModifiableContactPair,::Array<::UnityEngine::ModifiableContactPair>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::ModifiableContactPair> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ModifiableContactPair>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::ModifiableContactPair,::Array<::UnityEngine::ModifiableContactPair>*>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  src, ::ArrayW<::UnityEngine::ModifiableContactPair,::Array<::UnityEngine::ModifiableContactPair>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  src, ::ArrayW<::UnityEngine::ModifiableContactPair,::Array<::UnityEngine::ModifiableContactPair>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::ModifiableContactPair,::Array<::UnityEngine::ModifiableContactPair>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  src, int32_t  srcIndex, ::ArrayW<::UnityEngine::ModifiableContactPair,::Array<::UnityEngine::ModifiableContactPair>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 746 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::Experimental::GlobalIllumination::LightDataGI  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::Experimental::GlobalIllumination::LightDataGI,::Array<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Experimental::GlobalIllumination::LightDataGI get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::Experimental::GlobalIllumination::LightDataGI  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::Experimental::GlobalIllumination::LightDataGI,::Array<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::Experimental::GlobalIllumination::LightDataGI,::Array<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Experimental::GlobalIllumination::LightDataGI> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Experimental::GlobalIllumination::LightDataGI,::Array<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>*>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>  src, ::ArrayW<::UnityEngine::Experimental::GlobalIllumination::LightDataGI,::Array<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>  src, ::ArrayW<::UnityEngine::Experimental::GlobalIllumination::LightDataGI,::Array<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Experimental::GlobalIllumination::LightDataGI,::Array<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>  src, int32_t  srcIndex, ::ArrayW<::UnityEngine::Experimental::GlobalIllumination::LightDataGI,::Array<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 745 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<int16_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<int16_t>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) int16_t  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int16_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int16_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<int16_t>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<int16_t>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<int16_t,::Array<int16_t>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<int16_t>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline int16_t get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, int16_t  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<int16_t>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<int16_t,::Array<int16_t>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<int16_t,::Array<int16_t>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<int16_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<int16_t>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<int16_t>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<int16_t>  src, ::Unity::Collections::NativeArray_1<int16_t>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<int16_t,::Array<int16_t>*>  src, ::Unity::Collections::NativeArray_1<int16_t>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<int16_t>  src, ::ArrayW<int16_t,::Array<int16_t>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<int16_t>  src, ::Unity::Collections::NativeArray_1<int16_t>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<int16_t>  src, ::ArrayW<int16_t,::Array<int16_t>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<int16_t>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<int16_t>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<int16_t,::Array<int16_t>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<int16_t>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<int16_t>  src, int32_t  srcIndex, ::ArrayW<int16_t,::Array<int16_t>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 744 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::UIElements::UIR::GfxUpdateBufferRange  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange,::Array<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::UIR::GfxUpdateBufferRange get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::UIElements::UIR::GfxUpdateBufferRange  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange,::Array<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange,::Array<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange,::Array<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>*>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  src, ::ArrayW<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange,::Array<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  src, ::ArrayW<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange,::Array<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange,::Array<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  src, int32_t  srcIndex, ::ArrayW<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange,::Array<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 743 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::UIElements::UIR::DrawBufferRange>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::UIElements::UIR::DrawBufferRange  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UIR::DrawBufferRange>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UIR::DrawBufferRange>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::UIElements::UIR::DrawBufferRange,::Array<::UnityEngine::UIElements::UIR::DrawBufferRange>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::UIR::DrawBufferRange get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::UIElements::UIR::DrawBufferRange  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::UIElements::UIR::DrawBufferRange,::Array<::UnityEngine::UIElements::UIR::DrawBufferRange>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::UIElements::UIR::DrawBufferRange,::Array<::UnityEngine::UIElements::UIR::DrawBufferRange>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::UIElements::UIR::DrawBufferRange> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UIR::DrawBufferRange>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::UIElements::UIR::DrawBufferRange,::Array<::UnityEngine::UIElements::UIR::DrawBufferRange>*>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  src, ::ArrayW<::UnityEngine::UIElements::UIR::DrawBufferRange,::Array<::UnityEngine::UIElements::UIR::DrawBufferRange>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  src, ::ArrayW<::UnityEngine::UIElements::UIR::DrawBufferRange,::Array<::UnityEngine::UIElements::UIR::DrawBufferRange>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::UIElements::UIR::DrawBufferRange,::Array<::UnityEngine::UIElements::UIR::DrawBufferRange>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  src, int32_t  srcIndex, ::ArrayW<::UnityEngine::UIElements::UIR::DrawBufferRange,::Array<::UnityEngine::UIElements::UIR::DrawBufferRange>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 742 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::UnityEngine::Color32> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Color32>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::Color32  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Color32>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Color32>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Color32>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Color32>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Color32>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Color32 get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::Color32  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Color32> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Color32>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  src, ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  src, ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  src, int32_t  srcIndex, ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 741 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<uint8_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<uint8_t>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) uint8_t  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<uint8_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<uint8_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<uint8_t>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<uint8_t>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<uint8_t>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint8_t get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, uint8_t  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<uint8_t>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<uint8_t,::Array<uint8_t>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<uint8_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<uint8_t>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<uint8_t>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint8_t>  src, ::Unity::Collections::NativeArray_1<uint8_t>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<uint8_t,::Array<uint8_t>*>  src, ::Unity::Collections::NativeArray_1<uint8_t>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint8_t>  src, ::ArrayW<uint8_t,::Array<uint8_t>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint8_t>  src, ::Unity::Collections::NativeArray_1<uint8_t>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint8_t>  src, ::ArrayW<uint8_t,::Array<uint8_t>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint8_t>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<uint8_t>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<uint8_t,::Array<uint8_t>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<uint8_t>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint8_t>  src, int32_t  srcIndex, ::ArrayW<uint8_t,::Array<uint8_t>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 740 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::UnityEngine::BoneWeight1> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::BoneWeight1>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::BoneWeight1  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::BoneWeight1>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::BoneWeight1>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::BoneWeight1,::Array<::UnityEngine::BoneWeight1>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::BoneWeight1 get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::BoneWeight1  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::BoneWeight1,::Array<::UnityEngine::BoneWeight1>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::BoneWeight1,::Array<::UnityEngine::BoneWeight1>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::BoneWeight1> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::BoneWeight1>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::BoneWeight1,::Array<::UnityEngine::BoneWeight1>*>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  src, ::ArrayW<::UnityEngine::BoneWeight1,::Array<::UnityEngine::BoneWeight1>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  src, ::ArrayW<::UnityEngine::BoneWeight1,::Array<::UnityEngine::BoneWeight1>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::BoneWeight1,::Array<::UnityEngine::BoneWeight1>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  src, int32_t  srcIndex, ::ArrayW<::UnityEngine::BoneWeight1,::Array<::UnityEngine::BoneWeight1>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 739 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::UnityEngine::BoneWeight> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::BoneWeight>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::BoneWeight  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::BoneWeight>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::BoneWeight>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::BoneWeight,::Array<::UnityEngine::BoneWeight>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::BoneWeight get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::BoneWeight  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::BoneWeight,::Array<::UnityEngine::BoneWeight>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::BoneWeight,::Array<::UnityEngine::BoneWeight>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::BoneWeight> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::BoneWeight>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::BoneWeight,::Array<::UnityEngine::BoneWeight>*>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  src, ::ArrayW<::UnityEngine::BoneWeight,::Array<::UnityEngine::BoneWeight>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  src, ::ArrayW<::UnityEngine::BoneWeight,::Array<::UnityEngine::BoneWeight>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::BoneWeight,::Array<::UnityEngine::BoneWeight>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  src, int32_t  srcIndex, ::ArrayW<::UnityEngine::BoneWeight,::Array<::UnityEngine::BoneWeight>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 738 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::UnityEngine::Rendering::BatchVisibility> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Rendering::BatchVisibility>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::Rendering::BatchVisibility  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::BatchVisibility>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::BatchVisibility>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::Rendering::BatchVisibility,::Array<::UnityEngine::Rendering::BatchVisibility>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Rendering::BatchVisibility get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::Rendering::BatchVisibility  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::Rendering::BatchVisibility,::Array<::UnityEngine::Rendering::BatchVisibility>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::Rendering::BatchVisibility,::Array<::UnityEngine::Rendering::BatchVisibility>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Rendering::BatchVisibility> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Rendering::BatchVisibility>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Rendering::BatchVisibility,::Array<::UnityEngine::Rendering::BatchVisibility>*>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  src, ::ArrayW<::UnityEngine::Rendering::BatchVisibility,::Array<::UnityEngine::Rendering::BatchVisibility>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  src, ::ArrayW<::UnityEngine::Rendering::BatchVisibility,::Array<::UnityEngine::Rendering::BatchVisibility>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Rendering::BatchVisibility,::Array<::UnityEngine::Rendering::BatchVisibility>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>  src, int32_t  srcIndex, ::ArrayW<::UnityEngine::Rendering::BatchVisibility,::Array<::UnityEngine::Rendering::BatchVisibility>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 412 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::UnityEngine::Vector3> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Vector3>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::Vector3  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector3 get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::Vector3  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Vector3> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector3>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  src, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  src, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  src, int32_t  srcIndex, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 411 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::UnityEngine::Vector2> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Vector2>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::Vector2  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector2 get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::Vector2  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Vector2> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector2>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  src, ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  src, ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  src, int32_t  srcIndex, ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 407 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<uint64_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<uint64_t>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) uint64_t  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<uint64_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<uint64_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<uint64_t>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<uint64_t>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<uint64_t,::Array<uint64_t>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<uint64_t>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint64_t get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, uint64_t  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<uint64_t>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<uint64_t,::Array<uint64_t>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<uint64_t,::Array<uint64_t>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<uint64_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<uint64_t>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<uint64_t>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint64_t>  src, ::Unity::Collections::NativeArray_1<uint64_t>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<uint64_t,::Array<uint64_t>*>  src, ::Unity::Collections::NativeArray_1<uint64_t>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint64_t>  src, ::ArrayW<uint64_t,::Array<uint64_t>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint64_t>  src, ::Unity::Collections::NativeArray_1<uint64_t>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint64_t>  src, ::ArrayW<uint64_t,::Array<uint64_t>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint64_t>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<uint64_t>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<uint64_t,::Array<uint64_t>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<uint64_t>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<uint64_t>  src, int32_t  srcIndex, ::ArrayW<uint64_t,::Array<uint64_t>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 293 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<::UnityEngine::Color> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Color>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::Color  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Color>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Color>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Color>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Color>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Color>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Color get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::Color  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<::UnityEngine::Color>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<::UnityEngine::Color> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Color>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<::UnityEngine::Color>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Color>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Color>  src, ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Color>  src, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Color>  src, ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Color>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<::UnityEngine::Color>  src, int32_t  srcIndex, ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 98 })
// CS Name: ::Unity.Collections::NativeArray`1<T>
struct CORDL_TYPE NativeArray_1<int32_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeArray_1__Enumerator<int32_t>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<void>  m_Buffer;

/// @brief Field m_Length offset 0x8
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

/// @brief Field m_AllocatorLabel offset 0xc
 __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel)) ::Unity::Collections::Allocator  m_AllocatorLabel;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Item, put=set_Item)) int32_t  Item[];

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<int32_t>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeArray_1<int32_t>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_Buffer() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

constexpr void __set_m_AllocatorLabel(::Unity::Collections::Allocator  value) ;

constexpr ::Unity::Collections::Allocator& __get_m_AllocatorLabel() ;

constexpr ::Unity::Collections::Allocator const& __get_m_AllocatorLabel() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<int32_t,::Array<int32_t>*>  array, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Allocate(int32_t  length, ::Unity::Collections::Allocator  allocator, ByRef<::Unity::Collections::NativeArray_1<int32_t>>  array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, int32_t  value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeArray_1<int32_t>  array) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<int32_t,::Array<int32_t>*>  array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeArray_1__Enumerator<int32_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeArray_1<int32_t>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<int32_t>  src, ::Unity::Collections::NativeArray_1<int32_t>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<int32_t,::Array<int32_t>*>  src, ::Unity::Collections::NativeArray_1<int32_t>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<int32_t>  src, ::ArrayW<int32_t,::Array<int32_t>*>  dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<int32_t>  src, ::Unity::Collections::NativeArray_1<int32_t>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<int32_t>  src, ::ArrayW<int32_t,::Array<int32_t>*>  dst, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<int32_t>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<int32_t>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::ArrayW<int32_t,::Array<int32_t>*>  src, int32_t  srcIndex, ::Unity::Collections::NativeArray_1<int32_t>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Copy(::Unity::Collections::NativeArray_1<int32_t>  src, int32_t  srcIndex, ::ArrayW<int32_t,::Array<int32_t>*>  dst, int32_t  dstIndex, int32_t  length) ;

/// @brief Method InternalReinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> InternalReinterpret(int32_t  length) ;

/// @brief Method Reinterpret addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
inline ::Unity::Collections::NativeArray_1<U> Reinterpret(int32_t  expectedTypeSize) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(::cordl_internals::Ptr<void>  m_Buffer, int32_t  m_Length, ::Unity::Collections::Allocator  m_AllocatorLabel) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeArray_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeArray_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeArray_1, "Unity.Collections", "NativeArray`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::__NativeArray_1__Enumerator, "Unity.Collections", "NativeArray`1/Enumerator");
