#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IMECompositionString)
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __IMECompositionString__Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __IMECompositionString___buffer_e__FixedBuffer;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct IMECompositionString;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __IMECompositionString__Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __IMECompositionString___buffer_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::IMECompositionString);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__IMECompositionString__Enumerator);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer);
// Type: ::Enumerator
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6527))
// CS Name: ::IMECompositionString::Enumerator
struct CORDL_TYPE __IMECompositionString__Enumerator : public ::bs_hook::ValueTypeWrapper<0x8c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8c};

/// @brief Field m_CompositionString offset 0x0
 __declspec(property(get=__get_m_CompositionString, put=__set_m_CompositionString)) ::UnityEngine::InputSystem::LowLevel::IMECompositionString  m_CompositionString;

/// @brief Field m_CurrentCharacter offset 0x84
 __declspec(property(get=__get_m_CurrentCharacter, put=__set_m_CurrentCharacter)) char16_t  m_CurrentCharacter;

/// @brief Field m_CurrentIndex offset 0x88
 __declspec(property(get=__get_m_CurrentIndex, put=__set_m_CurrentIndex)) int32_t  m_CurrentIndex;

 __declspec(property(get=get_Current)) char16_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<char16_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<char16_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_CompositionString(::UnityEngine::InputSystem::LowLevel::IMECompositionString  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::IMECompositionString& __get_m_CompositionString() ;

constexpr ::UnityEngine::InputSystem::LowLevel::IMECompositionString const& __get_m_CompositionString() const;

constexpr void __set_m_CurrentCharacter(char16_t  value) ;

constexpr char16_t& __get_m_CurrentCharacter() ;

constexpr char16_t const& __get_m_CurrentCharacter() const;

constexpr void __set_m_CurrentIndex(int32_t  value) ;

constexpr int32_t& __get_m_CurrentIndex() ;

constexpr int32_t const& __get_m_CurrentIndex() const;

/// @brief Method .ctor addr 0x2aea004 size 0x24 virtual false final false
inline void _ctor(::UnityEngine::InputSystem::LowLevel::IMECompositionString  compositionString) ;

/// @brief Method MoveNext addr 0x2aea02c size 0x34 virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x2aea060 size 0xc virtual true final true
inline void Reset() ;

/// @brief Method Dispose addr 0x2aea06c size 0x4 virtual true final true
inline void Dispose() ;

/// @brief Method get_Current addr 0x2aea070 size 0x8 virtual true final true
inline char16_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2aea078 size 0x5c virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "m_CompositionString", ty: "::UnityEngine::InputSystem::LowLevel::IMECompositionString", modifiers: "", def_value: None }, CppParam { name: "m_CurrentCharacter", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __IMECompositionString__Enumerator(::UnityEngine::InputSystem::LowLevel::IMECompositionString  m_CompositionString, char16_t  m_CurrentCharacter, int32_t  m_CurrentIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IMECompositionString__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IMECompositionString__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__IMECompositionString__Enumerator, 0x8c>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::<buffer>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6528))
// CS Name: ::IMECompositionString::<buffer>e__FixedBuffer
struct CORDL_TYPE __IMECompositionString___buffer_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper<0x80> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field FixedElementField offset 0x0
 __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField)) char16_t  FixedElementField;

constexpr void __set_FixedElementField(char16_t  value) ;

constexpr char16_t& __get_FixedElementField() ;

constexpr char16_t const& __get_FixedElementField() const;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: None }]
constexpr __IMECompositionString___buffer_e__FixedBuffer(char16_t  FixedElementField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IMECompositionString___buffer_e__FixedBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x80>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IMECompositionString___buffer_e__FixedBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::IMECompositionString
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6529))
// CS Name: ::UnityEngine.InputSystem.LowLevel::IMECompositionString
struct CORDL_TYPE IMECompositionString : public ::bs_hook::ValueTypeWrapper<0x84> {
public:
// Declarations
using _buffer_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer;

using Enumerator = ::UnityEngine::InputSystem::LowLevel::__IMECompositionString__Enumerator;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x84};

/// @brief Field size offset 0x0
 __declspec(property(get=__get_size, put=__set_size)) int32_t  size;

/// @brief Field buffer offset 0x4
 __declspec(property(get=__get_buffer, put=__set_buffer)) ::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer  buffer;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) char16_t  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<char16_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

constexpr void __set_size(int32_t  value) ;

constexpr int32_t& __get_size() ;

constexpr int32_t const& __get_size() const;

constexpr void __set_buffer(::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer& __get_buffer() ;

constexpr ::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer const& __get_buffer() const;

/// @brief Method get_Count addr 0x2ae9ee0 size 0x8 virtual false final false
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x2ae9ee8 size 0x70 virtual false final false
inline char16_t get_Item(int32_t  index) ;

/// @brief Method .ctor addr 0x2ae9e60 size 0x80 virtual false final false
inline void _ctor(::StringW  characters) ;

/// @brief Method ToString addr 0x2ae9f58 size 0x18 virtual true final false
inline ::StringW ToString() ;

/// @brief Method GetEnumerator addr 0x2ae9f70 size 0x94 virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<char16_t>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2aea028 size 0x4 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr IMECompositionString(int32_t  size, ::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer  buffer) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IMECompositionString(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x84>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IMECompositionString()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::IMECompositionString, 0x84>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IMECompositionString, "UnityEngine.InputSystem.LowLevel", "IMECompositionString");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__IMECompositionString__Enumerator, "UnityEngine.InputSystem.LowLevel", "IMECompositionString/Enumerator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__IMECompositionString___buffer_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "IMECompositionString/<buffer>e__FixedBuffer");
