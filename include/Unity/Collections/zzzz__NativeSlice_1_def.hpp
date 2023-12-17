#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeSlice_1)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Unity::Collections {
template<typename T>
struct __NativeSlice_1__Enumerator;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine::UIElements::UIR {
struct DrawBufferRange;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
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
struct Vector4;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace Unity::Collections {
template<typename T>
struct __NativeSlice_1__Enumerator;
}
namespace Unity::Collections {
template<>
struct NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange>;
}
namespace Unity::Collections {
template<>
struct NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>;
}
namespace Unity::Collections {
template<>
struct NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>;
}
namespace Unity::Collections {
template<>
struct NativeSlice_1<::UnityEngine::UIElements::Vertex>;
}
namespace Unity::Collections {
template<>
struct NativeSlice_1<::UnityEngine::Vector4>;
}
namespace Unity::Collections {
template<>
struct NativeSlice_1<uint16_t>;
}
namespace Unity::Collections {
template<>
struct __NativeSlice_1__Enumerator<::UnityEngine::UIElements::UIR::DrawBufferRange>;
}
namespace Unity::Collections {
template<>
struct __NativeSlice_1__Enumerator<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>;
}
namespace Unity::Collections {
template<>
struct __NativeSlice_1__Enumerator<::UnityEngine::UIElements::UIR::Transform3x4>;
}
namespace Unity::Collections {
template<>
struct __NativeSlice_1__Enumerator<::UnityEngine::UIElements::Vertex>;
}
namespace Unity::Collections {
template<>
struct __NativeSlice_1__Enumerator<::UnityEngine::Vector4>;
}
namespace Unity::Collections {
template<>
struct __NativeSlice_1__Enumerator<uint16_t>;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::NativeSlice_1);
MARK_GEN_VAL_T(::Unity::Collections::__NativeSlice_1__Enumerator);
// Type: ::Enumerator
// Type: Unity.Collections::NativeSlice`1
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9993))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9993), inst: 756 })
// CS Name: ::NativeSlice`1::Enumerator<T>
struct CORDL_TYPE __NativeSlice_1__Enumerator<::UnityEngine::UIElements::Vertex> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>  m_Array;

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

constexpr void __set_m_Array(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>  value) ;

constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>  array) ;

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

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeSlice_1__Enumerator(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeSlice_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeSlice_1__Enumerator()  = default;


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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9993))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9993), inst: 755 })
// CS Name: ::NativeSlice`1::Enumerator<T>
struct CORDL_TYPE __NativeSlice_1__Enumerator<::UnityEngine::Vector4> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  m_Array;

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

constexpr void __set_m_Array(::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  value) ;

constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>  array) ;

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

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeSlice_1__Enumerator(::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeSlice_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeSlice_1__Enumerator()  = default;


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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9993))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9993), inst: 752 })
// CS Name: ::NativeSlice`1::Enumerator<T>
struct CORDL_TYPE __NativeSlice_1__Enumerator<uint16_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeSlice_1<uint16_t>  m_Array;

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

constexpr void __set_m_Array(::Unity::Collections::NativeSlice_1<uint16_t>  value) ;

constexpr ::Unity::Collections::NativeSlice_1<uint16_t>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeSlice_1<uint16_t> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeSlice_1<uint16_t>>  array) ;

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

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeSlice_1<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeSlice_1__Enumerator(::Unity::Collections::NativeSlice_1<uint16_t>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeSlice_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeSlice_1__Enumerator()  = default;


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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9993))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9993), inst: 751 })
// CS Name: ::NativeSlice`1::Enumerator<T>
struct CORDL_TYPE __NativeSlice_1__Enumerator<::UnityEngine::UIElements::UIR::Transform3x4> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>  m_Array;

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

constexpr void __set_m_Array(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>  value) ;

constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>>  array) ;

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

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeSlice_1__Enumerator(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeSlice_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeSlice_1__Enumerator()  = default;


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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9993))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9993), inst: 744 })
// CS Name: ::NativeSlice`1::Enumerator<T>
struct CORDL_TYPE __NativeSlice_1__Enumerator<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  m_Array;

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

constexpr void __set_m_Array(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  value) ;

constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>>  array) ;

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

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeSlice_1__Enumerator(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeSlice_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeSlice_1__Enumerator()  = default;


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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9993))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9993), inst: 743 })
// CS Name: ::NativeSlice`1::Enumerator<T>
struct CORDL_TYPE __NativeSlice_1__Enumerator<::UnityEngine::UIElements::UIR::DrawBufferRange> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Array offset 0x0
 __declspec(property(get=__get_m_Array, put=__set_m_Array)) ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  m_Array;

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

constexpr void __set_m_Array(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  value) ;

constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange>& __get_m_Array() ;

constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange> const& __get_m_Array() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange>>  array) ;

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

// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NativeSlice_1__Enumerator(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  m_Array, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NativeSlice_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NativeSlice_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeSlice`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9994))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9994), inst: 756 })
// CS Name: ::Unity.Collections::NativeSlice`1<T>
struct CORDL_TYPE NativeSlice_1<::UnityEngine::UIElements::Vertex> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeSlice_1__Enumerator<::UnityEngine::UIElements::Vertex>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<uint8_t>  m_Buffer;

/// @brief Field m_Stride offset 0x8
 __declspec(property(get=__get_m_Stride, put=__set_m_Stride)) int32_t  m_Stride;

/// @brief Field m_Length offset 0xc
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::UIElements::Vertex  Item[];

 __declspec(property(get=get_Stride)) int32_t  Stride;

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Vertex>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Vertex>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<uint8_t>  value) ;

constexpr ::cordl_internals::Ptr<uint8_t>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<uint8_t> const& __get_m_Buffer() const;

constexpr void __set_m_Stride(int32_t  value) ;

constexpr int32_t& __get_m_Stride() ;

constexpr int32_t const& __get_m_Stride() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>  slice, int32_t  start, int32_t  length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  array) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> op_Implicit___Unity__Collections__NativeSlice_1___UnityEngine__UIElements__Vertex_(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>  array, int32_t  start, int32_t  length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::Vertex get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::UIElements::Vertex  value) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>  slice) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::ArrayW<::UnityEngine::UIElements::Vertex,::Array<::UnityEngine::UIElements::Vertex>*>  array) ;

/// @brief Method get_Stride addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Stride() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeSlice_1__Enumerator<::UnityEngine::UIElements::Vertex> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::Vertex>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Inequality(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>  left, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>  right) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_Stride", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeSlice_1(::cordl_internals::Ptr<uint8_t>  m_Buffer, int32_t  m_Stride, int32_t  m_Length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeSlice_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeSlice_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeSlice`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9994))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9994), inst: 755 })
// CS Name: ::Unity.Collections::NativeSlice`1<T>
struct CORDL_TYPE NativeSlice_1<::UnityEngine::Vector4> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeSlice_1__Enumerator<::UnityEngine::Vector4>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<uint8_t>  m_Buffer;

/// @brief Field m_Stride offset 0x8
 __declspec(property(get=__get_m_Stride, put=__set_m_Stride)) int32_t  m_Stride;

/// @brief Field m_Length offset 0xc
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::Vector4  Item[];

 __declspec(property(get=get_Stride)) int32_t  Stride;

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector4>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector4>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<uint8_t>  value) ;

constexpr ::cordl_internals::Ptr<uint8_t>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<uint8_t> const& __get_m_Buffer() const;

constexpr void __set_m_Stride(int32_t  value) ;

constexpr int32_t& __get_m_Stride() ;

constexpr int32_t const& __get_m_Stride() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  slice, int32_t  start, int32_t  length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  array) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4> op_Implicit___Unity__Collections__NativeSlice_1___UnityEngine__Vector4_(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  array, int32_t  start, int32_t  length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector4 get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::Vector4  value) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  slice) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  array) ;

/// @brief Method get_Stride addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Stride() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeSlice_1__Enumerator<::UnityEngine::Vector4> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Vector4>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Inequality(::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  left, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  right) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_Stride", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeSlice_1(::cordl_internals::Ptr<uint8_t>  m_Buffer, int32_t  m_Stride, int32_t  m_Length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeSlice_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeSlice_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeSlice`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9994))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9994), inst: 752 })
// CS Name: ::Unity.Collections::NativeSlice`1<T>
struct CORDL_TYPE NativeSlice_1<uint16_t> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeSlice_1__Enumerator<uint16_t>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<uint8_t>  m_Buffer;

/// @brief Field m_Stride offset 0x8
 __declspec(property(get=__get_m_Stride, put=__set_m_Stride)) int32_t  m_Stride;

/// @brief Field m_Length offset 0xc
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

 __declspec(property(get=get_Item, put=set_Item)) uint16_t  Item[];

 __declspec(property(get=get_Stride)) int32_t  Stride;

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<uint16_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<uint16_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeSlice_1<uint16_t>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeSlice_1<uint16_t>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<uint8_t>  value) ;

constexpr ::cordl_internals::Ptr<uint8_t>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<uint8_t> const& __get_m_Buffer() const;

constexpr void __set_m_Stride(int32_t  value) ;

constexpr int32_t& __get_m_Stride() ;

constexpr int32_t const& __get_m_Stride() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Unity::Collections::NativeSlice_1<uint16_t>  slice, int32_t  start, int32_t  length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Unity::Collections::NativeArray_1<uint16_t>  array) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Unity::Collections::NativeSlice_1<uint16_t> op_Implicit___Unity__Collections__NativeSlice_1_uint16_t_(::Unity::Collections::NativeArray_1<uint16_t>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Unity::Collections::NativeArray_1<uint16_t>  array, int32_t  start, int32_t  length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint16_t get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, uint16_t  value) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeSlice_1<uint16_t>  slice) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::ArrayW<uint16_t,::Array<uint16_t>*>  array) ;

/// @brief Method get_Stride addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Stride() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeSlice_1__Enumerator<uint16_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<uint16_t>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeSlice_1<uint16_t>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Inequality(::Unity::Collections::NativeSlice_1<uint16_t>  left, ::Unity::Collections::NativeSlice_1<uint16_t>  right) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_Stride", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeSlice_1(::cordl_internals::Ptr<uint8_t>  m_Buffer, int32_t  m_Stride, int32_t  m_Length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeSlice_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeSlice_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeSlice`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9994))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9994), inst: 751 })
// CS Name: ::Unity.Collections::NativeSlice`1<T>
struct CORDL_TYPE NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeSlice_1__Enumerator<::UnityEngine::UIElements::UIR::Transform3x4>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<uint8_t>  m_Buffer;

/// @brief Field m_Stride offset 0x8
 __declspec(property(get=__get_m_Stride, put=__set_m_Stride)) int32_t  m_Stride;

/// @brief Field m_Length offset 0xc
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::UIElements::UIR::Transform3x4  Item[];

 __declspec(property(get=get_Stride)) int32_t  Stride;

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UIR::Transform3x4>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UIR::Transform3x4>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<uint8_t>  value) ;

constexpr ::cordl_internals::Ptr<uint8_t>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<uint8_t> const& __get_m_Buffer() const;

constexpr void __set_m_Stride(int32_t  value) ;

constexpr int32_t& __get_m_Stride() ;

constexpr int32_t const& __get_m_Stride() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>  slice, int32_t  start, int32_t  length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  array) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4> op_Implicit___Unity__Collections__NativeSlice_1___UnityEngine__UIElements__UIR__Transform3x4_(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  array, int32_t  start, int32_t  length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::UIR::Transform3x4 get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::UIElements::UIR::Transform3x4  value) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>  slice) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::ArrayW<::UnityEngine::UIElements::UIR::Transform3x4,::Array<::UnityEngine::UIElements::UIR::Transform3x4>*>  array) ;

/// @brief Method get_Stride addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Stride() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeSlice_1__Enumerator<::UnityEngine::UIElements::UIR::Transform3x4> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UIR::Transform3x4>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Inequality(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>  left, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>  right) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_Stride", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeSlice_1(::cordl_internals::Ptr<uint8_t>  m_Buffer, int32_t  m_Stride, int32_t  m_Length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeSlice_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeSlice_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeSlice`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9994))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9994), inst: 744 })
// CS Name: ::Unity.Collections::NativeSlice`1<T>
struct CORDL_TYPE NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeSlice_1__Enumerator<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<uint8_t>  m_Buffer;

/// @brief Field m_Stride offset 0x8
 __declspec(property(get=__get_m_Stride, put=__set_m_Stride)) int32_t  m_Stride;

/// @brief Field m_Length offset 0xc
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::UIElements::UIR::GfxUpdateBufferRange  Item[];

 __declspec(property(get=get_Stride)) int32_t  Stride;

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<uint8_t>  value) ;

constexpr ::cordl_internals::Ptr<uint8_t>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<uint8_t> const& __get_m_Buffer() const;

constexpr void __set_m_Stride(int32_t  value) ;

constexpr int32_t& __get_m_Stride() ;

constexpr int32_t const& __get_m_Stride() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  slice, int32_t  start, int32_t  length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  array) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange> op_Implicit___Unity__Collections__NativeSlice_1___UnityEngine__UIElements__UIR__GfxUpdateBufferRange_(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  array, int32_t  start, int32_t  length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::UIR::GfxUpdateBufferRange get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::UIElements::UIR::GfxUpdateBufferRange  value) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  slice) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::ArrayW<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange,::Array<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>*>  array) ;

/// @brief Method get_Stride addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Stride() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeSlice_1__Enumerator<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Inequality(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  left, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange>  right) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_Stride", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeSlice_1(::cordl_internals::Ptr<uint8_t>  m_Buffer, int32_t  m_Stride, int32_t  m_Length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeSlice_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeSlice_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeSlice`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9994))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9994), inst: 743 })
// CS Name: ::Unity.Collections::NativeSlice`1<T>
struct CORDL_TYPE NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Enumerator = ::Unity::Collections::__NativeSlice_1__Enumerator<::UnityEngine::UIElements::UIR::DrawBufferRange>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Buffer offset 0x0
 __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer)) ::cordl_internals::Ptr<uint8_t>  m_Buffer;

/// @brief Field m_Stride offset 0x8
 __declspec(property(get=__get_m_Stride, put=__set_m_Stride)) int32_t  m_Stride;

/// @brief Field m_Length offset 0xc
 __declspec(property(get=__get_m_Length, put=__set_m_Length)) int32_t  m_Length;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::UIElements::UIR::DrawBufferRange  Item[];

 __declspec(property(get=get_Stride)) int32_t  Stride;

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UIR::DrawBufferRange>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UIR::DrawBufferRange>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange>>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange>>*() ;

constexpr void __set_m_Buffer(::cordl_internals::Ptr<uint8_t>  value) ;

constexpr ::cordl_internals::Ptr<uint8_t>& __get_m_Buffer() ;

constexpr ::cordl_internals::Ptr<uint8_t> const& __get_m_Buffer() const;

constexpr void __set_m_Stride(int32_t  value) ;

constexpr int32_t& __get_m_Stride() ;

constexpr int32_t const& __get_m_Stride() const;

constexpr void __set_m_Length(int32_t  value) ;

constexpr int32_t& __get_m_Length() ;

constexpr int32_t const& __get_m_Length() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  slice, int32_t  start, int32_t  length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  array) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange> op_Implicit___Unity__Collections__NativeSlice_1___UnityEngine__UIElements__UIR__DrawBufferRange_(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  array, int32_t  start, int32_t  length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::UIR::DrawBufferRange get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::UIElements::UIR::DrawBufferRange  value) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  slice) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::ArrayW<::UnityEngine::UIElements::UIR::DrawBufferRange,::Array<::UnityEngine::UIElements::UIR::DrawBufferRange>*>  array) ;

/// @brief Method get_Stride addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Stride() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Length() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Unity::Collections::__NativeSlice_1__Enumerator<::UnityEngine::UIElements::UIR::DrawBufferRange> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UIR::DrawBufferRange>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Inequality(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  left, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange>  right) ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_Stride", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeSlice_1(::cordl_internals::Ptr<uint8_t>  m_Buffer, int32_t  m_Stride, int32_t  m_Length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NativeSlice_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NativeSlice_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeSlice_1, "Unity.Collections", "NativeSlice`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::__NativeSlice_1__Enumerator, "Unity.Collections", "NativeSlice`1/Enumerator");
