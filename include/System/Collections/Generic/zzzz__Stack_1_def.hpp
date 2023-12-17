#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Stack_1)
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
struct __Stack_1__Enumerator;
}
namespace System::Xml::Schema {
struct __SequenceNode__SequenceConstructPosContext;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections {
class ICollection;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UIElements::StyleSheets {
struct __BaseStyleMatcher__MatchContext;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements {
struct __EventDispatcher__DispatchContext;
}
namespace UnityEngine::UIElements {
struct __StyleVariableResolver__ResolveContext;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System::Collections::Generic {
template<>
class Stack_1<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>;
}
namespace System::Collections::Generic {
template<>
class Stack_1<::UnityEngine::Matrix4x4>;
}
namespace System::Collections::Generic {
template<>
class Stack_1<::UnityEngine::Rect>;
}
namespace System::Collections::Generic {
template<>
class Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>;
}
namespace System::Collections::Generic {
template<>
class Stack_1<::UnityEngine::UIElements::TextureId>;
}
namespace System::Collections::Generic {
template<>
class Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>;
}
namespace System::Collections::Generic {
template<>
class Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
class Stack_1<T>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
class Stack_1<T>;
}
namespace System::Collections::Generic {
template<>
class Stack_1<int32_t>;
}
namespace System::Collections::Generic {
template<typename T>
struct __Stack_1__Enumerator;
}
namespace System::Collections::Generic {
template<>
struct __Stack_1__Enumerator<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>;
}
namespace System::Collections::Generic {
template<>
struct __Stack_1__Enumerator<::UnityEngine::Matrix4x4>;
}
namespace System::Collections::Generic {
template<>
struct __Stack_1__Enumerator<::UnityEngine::Rect>;
}
namespace System::Collections::Generic {
template<>
struct __Stack_1__Enumerator<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>;
}
namespace System::Collections::Generic {
template<>
struct __Stack_1__Enumerator<::UnityEngine::UIElements::TextureId>;
}
namespace System::Collections::Generic {
template<>
struct __Stack_1__Enumerator<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>;
}
namespace System::Collections::Generic {
template<>
struct __Stack_1__Enumerator<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __Stack_1__Enumerator<T>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
struct __Stack_1__Enumerator<T>;
}
namespace System::Collections::Generic {
template<>
struct __Stack_1__Enumerator<int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::Stack_1);
MARK_GEN_VAL_T(::System::Collections::Generic::__Stack_1__Enumerator);
// Type: ::Enumerator
// Type: System.Collections.Generic::Stack`1
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 6053 })
// CS Name: ::Stack`1::Enumerator<T>
struct CORDL_TYPE __Stack_1__Enumerator<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext> : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field _stack offset 0x0
 __declspec(property(get=__get__stack, put=__set__stack)) ::System::Collections::Generic::Stack_1<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>*  _stack;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) ::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext  _currentElement;

 __declspec(property(get=get_Current)) ::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__stack(::System::Collections::Generic::Stack_1<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>* __get__stack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>*> __get__stack() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext  value) ;

constexpr ::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext& __get__currentElement() ;

constexpr ::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Stack_1<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>*  stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext", modifiers: "", def_value: None }]
constexpr __Stack_1__Enumerator(::System::Collections::Generic::Stack_1<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>*  _stack, int32_t  _version, int32_t  _index, ::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Stack_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Stack_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 5019 })
// CS Name: ::Stack`1::Enumerator<T>
struct CORDL_TYPE __Stack_1__Enumerator<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _stack offset 0x0
 __declspec(property(get=__get__stack, put=__set__stack)) ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*  _stack;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) ::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext  _currentElement;

 __declspec(property(get=get_Current)) ::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__stack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>* __get__stack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*> __get__stack() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext  value) ;

constexpr ::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext& __get__currentElement() ;

constexpr ::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*  stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext", modifiers: "", def_value: None }]
constexpr __Stack_1__Enumerator(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*  _stack, int32_t  _version, int32_t  _index, ::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Stack_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Stack_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 5018 })
// CS Name: ::Stack`1::Enumerator<T>
struct CORDL_TYPE __Stack_1__Enumerator<::UnityEngine::UIElements::__EventDispatcher__DispatchContext> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _stack offset 0x0
 __declspec(property(get=__get__stack, put=__set__stack)) ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*  _stack;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) ::UnityEngine::UIElements::__EventDispatcher__DispatchContext  _currentElement;

 __declspec(property(get=get_Current)) ::UnityEngine::UIElements::__EventDispatcher__DispatchContext  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__stack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>* __get__stack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*> __get__stack() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(::UnityEngine::UIElements::__EventDispatcher__DispatchContext  value) ;

constexpr ::UnityEngine::UIElements::__EventDispatcher__DispatchContext& __get__currentElement() ;

constexpr ::UnityEngine::UIElements::__EventDispatcher__DispatchContext const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*  stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::UIElements::__EventDispatcher__DispatchContext get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::UnityEngine::UIElements::__EventDispatcher__DispatchContext", modifiers: "", def_value: None }]
constexpr __Stack_1__Enumerator(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*  _stack, int32_t  _version, int32_t  _index, ::UnityEngine::UIElements::__EventDispatcher__DispatchContext  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Stack_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Stack_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 5017 })
// CS Name: ::Stack`1::Enumerator<T>
struct CORDL_TYPE __Stack_1__Enumerator<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _stack offset 0x0
 __declspec(property(get=__get__stack, put=__set__stack)) ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>*  _stack;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) ::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext  _currentElement;

 __declspec(property(get=get_Current)) ::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__stack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>* __get__stack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>*> __get__stack() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext  value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext& __get__currentElement() ;

constexpr ::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>*  stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext", modifiers: "", def_value: None }]
constexpr __Stack_1__Enumerator(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>*  _stack, int32_t  _version, int32_t  _index, ::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Stack_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Stack_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 5016 })
// CS Name: ::Stack`1::Enumerator<T>
struct CORDL_TYPE __Stack_1__Enumerator<::UnityEngine::UIElements::TextureId> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _stack offset 0x0
 __declspec(property(get=__get__stack, put=__set__stack)) ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>*  _stack;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) ::UnityEngine::UIElements::TextureId  _currentElement;

 __declspec(property(get=get_Current)) ::UnityEngine::UIElements::TextureId  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::TextureId>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::TextureId>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__stack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>* __get__stack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>*> __get__stack() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(::UnityEngine::UIElements::TextureId  value) ;

constexpr ::UnityEngine::UIElements::TextureId& __get__currentElement() ;

constexpr ::UnityEngine::UIElements::TextureId const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>*  stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::UIElements::TextureId get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::UnityEngine::UIElements::TextureId", modifiers: "", def_value: None }]
constexpr __Stack_1__Enumerator(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>*  _stack, int32_t  _version, int32_t  _index, ::UnityEngine::UIElements::TextureId  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Stack_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Stack_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3345 })
// CS Name: ::Stack`1::Enumerator<T>
struct CORDL_TYPE __Stack_1__Enumerator<::UnityEngine::Rect> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _stack offset 0x0
 __declspec(property(get=__get__stack, put=__set__stack)) ::System::Collections::Generic::Stack_1<::UnityEngine::Rect>*  _stack;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) ::UnityEngine::Rect  _currentElement;

 __declspec(property(get=get_Current)) ::UnityEngine::Rect  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Rect>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Rect>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__stack(::System::Collections::Generic::Stack_1<::UnityEngine::Rect>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Rect>* __get__stack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::Rect>*> __get__stack() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(::UnityEngine::Rect  value) ;

constexpr ::UnityEngine::Rect& __get__currentElement() ;

constexpr ::UnityEngine::Rect const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Stack_1<::UnityEngine::Rect>*  stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Rect get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<::UnityEngine::Rect>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }]
constexpr __Stack_1__Enumerator(::System::Collections::Generic::Stack_1<::UnityEngine::Rect>*  _stack, int32_t  _version, int32_t  _index, ::UnityEngine::Rect  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Stack_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Stack_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3316 })
// CS Name: ::Stack`1::Enumerator<T>
struct CORDL_TYPE __Stack_1__Enumerator<::UnityEngine::Matrix4x4> : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field _stack offset 0x0
 __declspec(property(get=__get__stack, put=__set__stack)) ::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>*  _stack;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) ::UnityEngine::Matrix4x4  _currentElement;

 __declspec(property(get=get_Current)) ::UnityEngine::Matrix4x4  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Matrix4x4>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Matrix4x4>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__stack(::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>* __get__stack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>*> __get__stack() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(::UnityEngine::Matrix4x4  value) ;

constexpr ::UnityEngine::Matrix4x4& __get__currentElement() ;

constexpr ::UnityEngine::Matrix4x4 const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>*  stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::Matrix4x4 get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }]
constexpr __Stack_1__Enumerator(::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>*  _stack, int32_t  _version, int32_t  _index, ::UnityEngine::Matrix4x4  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Stack_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Stack_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 974 })
// CS Name: ::Stack`1::Enumerator<T>
struct CORDL_TYPE __Stack_1__Enumerator<T> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _stack offset 0x0
 __declspec(property(get=__get__stack, put=__set__stack)) ::System::Collections::Generic::Stack_1<T>*  _stack;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) T  _currentElement;

 __declspec(property(get=get_Current)) T  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__stack(::System::Collections::Generic::Stack_1<T>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<T>* __get__stack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<T>*> __get__stack() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(T  value) ;

constexpr T& __get__currentElement() ;

constexpr T const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Stack_1<T>*  stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline T get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "T", modifiers: "", def_value: None }]
constexpr __Stack_1__Enumerator(::System::Collections::Generic::Stack_1<T>*  _stack, int32_t  _version, int32_t  _index, T  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Stack_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Stack_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 98 })
// CS Name: ::Stack`1::Enumerator<T>
struct CORDL_TYPE __Stack_1__Enumerator<int32_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _stack offset 0x0
 __declspec(property(get=__get__stack, put=__set__stack)) ::System::Collections::Generic::Stack_1<int32_t>*  _stack;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) int32_t  _currentElement;

 __declspec(property(get=get_Current)) int32_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__stack(::System::Collections::Generic::Stack_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<int32_t>* __get__stack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<int32_t>*> __get__stack() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(int32_t  value) ;

constexpr int32_t& __get__currentElement() ;

constexpr int32_t const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Stack_1<int32_t>*  stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Stack_1__Enumerator(::System::Collections::Generic::Stack_1<int32_t>*  _stack, int32_t  _version, int32_t  _index, int32_t  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Stack_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Stack_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 2 })
// CS Name: ::Stack`1::Enumerator<T>
struct CORDL_TYPE __Stack_1__Enumerator<T> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _stack offset 0x0
 __declspec(property(get=__get__stack, put=__set__stack)) ::System::Collections::Generic::Stack_1<T>*  _stack;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) T  _currentElement;

 __declspec(property(get=get_Current)) T  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__stack(::System::Collections::Generic::Stack_1<T>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<T>* __get__stack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<T>*> __get__stack() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(T  value) ;

constexpr T& __get__currentElement() ;

constexpr T const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Stack_1<T>*  stack) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline T get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "T", modifiers: "", def_value: None }]
constexpr __Stack_1__Enumerator(::System::Collections::Generic::Stack_1<T>*  _stack, int32_t  _version, int32_t  _index, T  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Stack_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Stack_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Stack`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3856)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3856), inst: 6053 })
// CS Name: ::System.Collections.Generic::Stack`1<T>*
class CORDL_TYPE Stack_1<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Stack_1__Enumerator<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field DefaultCapacity offset 0x0
static constexpr int32_t  DefaultCapacity{static_cast<int32_t>(0x4)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext,::Array<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>*>  _array;

/// @brief Field _size offset 0x18
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x1c
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x20
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>*() noexcept;

constexpr void __set__array(::ArrayW<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext,::Array<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>*>  value) ;

constexpr ::ArrayW<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext,::Array<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>*>& __get__array() ;

constexpr ::ArrayW<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext,::Array<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>*> const& __get__array() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Stack_1<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Stack_1<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext  item) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  arrayIndex) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext Peek() ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext Pop() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Push(::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext  item) ;

/// @brief Method PushWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void PushWithResize(::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext  item) ;

/// @brief Method ThrowForEmptyStack addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyStack() ;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Stack_1(Stack_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Stack_1(Stack_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Stack_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Stack`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3856))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3856), inst: 5019 })
// CS Name: ::System.Collections.Generic::Stack`1<T>*
class CORDL_TYPE Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Stack_1__Enumerator<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field DefaultCapacity offset 0x0
static constexpr int32_t  DefaultCapacity{static_cast<int32_t>(0x4)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext,::Array<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*>  _array;

/// @brief Field _size offset 0x18
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x1c
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x20
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*() noexcept;

constexpr void __set__array(::ArrayW<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext,::Array<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext,::Array<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*>& __get__array() ;

constexpr ::ArrayW<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext,::Array<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*> const& __get__array() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext  item) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  arrayIndex) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext Peek() ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext Pop() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Push(::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext  item) ;

/// @brief Method PushWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void PushWithResize(::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext  item) ;

/// @brief Method ThrowForEmptyStack addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyStack() ;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Stack_1(Stack_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Stack_1(Stack_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Stack_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Stack`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3856))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3856), inst: 5018 })
// CS Name: ::System.Collections.Generic::Stack`1<T>*
class CORDL_TYPE Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Stack_1__Enumerator<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field DefaultCapacity offset 0x0
static constexpr int32_t  DefaultCapacity{static_cast<int32_t>(0x4)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<::UnityEngine::UIElements::__EventDispatcher__DispatchContext,::Array<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*>  _array;

/// @brief Field _size offset 0x18
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x1c
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x20
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*() noexcept;

constexpr void __set__array(::ArrayW<::UnityEngine::UIElements::__EventDispatcher__DispatchContext,::Array<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::__EventDispatcher__DispatchContext,::Array<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*>& __get__array() ;

constexpr ::ArrayW<::UnityEngine::UIElements::__EventDispatcher__DispatchContext,::Array<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*> const& __get__array() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::UnityEngine::UIElements::__EventDispatcher__DispatchContext  item) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  arrayIndex) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::__EventDispatcher__DispatchContext Peek() ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::__EventDispatcher__DispatchContext Pop() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Push(::UnityEngine::UIElements::__EventDispatcher__DispatchContext  item) ;

/// @brief Method PushWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void PushWithResize(::UnityEngine::UIElements::__EventDispatcher__DispatchContext  item) ;

/// @brief Method ThrowForEmptyStack addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyStack() ;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Stack_1(Stack_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Stack_1(Stack_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Stack_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Stack`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3856))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3856), inst: 5017 })
// CS Name: ::System.Collections.Generic::Stack`1<T>*
class CORDL_TYPE Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Stack_1__Enumerator<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field DefaultCapacity offset 0x0
static constexpr int32_t  DefaultCapacity{static_cast<int32_t>(0x4)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext,::Array<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>*>  _array;

/// @brief Field _size offset 0x18
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x1c
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x20
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>*() noexcept;

constexpr void __set__array(::ArrayW<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext,::Array<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext,::Array<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>*>& __get__array() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext,::Array<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>*> const& __get__array() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext  item) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  arrayIndex) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext Peek() ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext Pop() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Push(::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext  item) ;

/// @brief Method PushWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void PushWithResize(::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext  item) ;

/// @brief Method ThrowForEmptyStack addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyStack() ;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Stack_1(Stack_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Stack_1(Stack_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Stack_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Stack`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3856)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3856), inst: 5016 })
// CS Name: ::System.Collections.Generic::Stack`1<T>*
class CORDL_TYPE Stack_1<::UnityEngine::UIElements::TextureId> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Stack_1__Enumerator<::UnityEngine::UIElements::TextureId>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field DefaultCapacity offset 0x0
static constexpr int32_t  DefaultCapacity{static_cast<int32_t>(0x4)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<::UnityEngine::UIElements::TextureId,::Array<::UnityEngine::UIElements::TextureId>*>  _array;

/// @brief Field _size offset 0x18
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x1c
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x20
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TextureId>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::TextureId>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::UIElements::TextureId>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::UIElements::TextureId>*() noexcept;

constexpr void __set__array(::ArrayW<::UnityEngine::UIElements::TextureId,::Array<::UnityEngine::UIElements::TextureId>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::TextureId,::Array<::UnityEngine::UIElements::TextureId>*>& __get__array() ;

constexpr ::ArrayW<::UnityEngine::UIElements::TextureId,::Array<::UnityEngine::UIElements::TextureId>*> const& __get__array() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::UnityEngine::UIElements::TextureId  item) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  arrayIndex) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::TextureId>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::TextureId Peek() ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::TextureId Pop() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Push(::UnityEngine::UIElements::TextureId  item) ;

/// @brief Method PushWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void PushWithResize(::UnityEngine::UIElements::TextureId  item) ;

/// @brief Method ThrowForEmptyStack addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyStack() ;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Stack_1(Stack_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Stack_1(Stack_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Stack_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Stack`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3856)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3856), inst: 3345 })
// CS Name: ::System.Collections.Generic::Stack`1<T>*
class CORDL_TYPE Stack_1<::UnityEngine::Rect> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Stack_1__Enumerator<::UnityEngine::Rect>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field DefaultCapacity offset 0x0
static constexpr int32_t  DefaultCapacity{static_cast<int32_t>(0x4)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<::UnityEngine::Rect,::Array<::UnityEngine::Rect>*>  _array;

/// @brief Field _size offset 0x18
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x1c
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x20
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rect>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rect>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Rect>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Rect>*() noexcept;

constexpr void __set__array(::ArrayW<::UnityEngine::Rect,::Array<::UnityEngine::Rect>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Rect,::Array<::UnityEngine::Rect>*>& __get__array() ;

constexpr ::ArrayW<::UnityEngine::Rect,::Array<::UnityEngine::Rect>*> const& __get__array() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Stack_1<::UnityEngine::Rect>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Stack_1<::UnityEngine::Rect>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::UnityEngine::Rect  item) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  arrayIndex) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Rect>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Rect Peek() ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Rect Pop() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Push(::UnityEngine::Rect  item) ;

/// @brief Method PushWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void PushWithResize(::UnityEngine::Rect  item) ;

/// @brief Method ThrowForEmptyStack addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyStack() ;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Stack_1(Stack_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Stack_1(Stack_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Stack_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Stack`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3856)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3856), inst: 3316 })
// CS Name: ::System.Collections.Generic::Stack`1<T>*
class CORDL_TYPE Stack_1<::UnityEngine::Matrix4x4> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Stack_1__Enumerator<::UnityEngine::Matrix4x4>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field DefaultCapacity offset 0x0
static constexpr int32_t  DefaultCapacity{static_cast<int32_t>(0x4)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  _array;

/// @brief Field _size offset 0x18
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x1c
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x20
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Matrix4x4>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Matrix4x4>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Matrix4x4>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Matrix4x4>*() noexcept;

constexpr void __set__array(::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>& __get__array() ;

constexpr ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*> const& __get__array() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::UnityEngine::Matrix4x4  item) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  arrayIndex) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Matrix4x4>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Matrix4x4 Peek() ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Matrix4x4 Pop() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Push(::UnityEngine::Matrix4x4  item) ;

/// @brief Method PushWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void PushWithResize(::UnityEngine::Matrix4x4  item) ;

/// @brief Method ThrowForEmptyStack addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyStack() ;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Stack_1(Stack_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Stack_1(Stack_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Stack_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Stack`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3856)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3856), inst: 974 })
// CS Name: ::System.Collections.Generic::Stack`1<T>*
class CORDL_TYPE Stack_1<T> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Stack_1__Enumerator<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field DefaultCapacity offset 0x0
static constexpr int32_t  DefaultCapacity{static_cast<int32_t>(0x4)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<T,::Array<T>*>  _array;

/// @brief Field _size offset 0x18
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x1c
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x20
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

constexpr void __set__array(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get__array() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get__array() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Stack_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Stack_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(T  item) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  arrayIndex) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Peek() ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Pop() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Push(T  item) ;

/// @brief Method PushWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void PushWithResize(T  item) ;

/// @brief Method ThrowForEmptyStack addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyStack() ;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Stack_1(Stack_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Stack_1(Stack_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Stack_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Stack`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3856))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3856), inst: 98 })
// CS Name: ::System.Collections.Generic::Stack`1<T>*
class CORDL_TYPE Stack_1<int32_t> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Stack_1__Enumerator<int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field DefaultCapacity offset 0x0
static constexpr int32_t  DefaultCapacity{static_cast<int32_t>(0x4)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<int32_t,::Array<int32_t>*>  _array;

/// @brief Field _size offset 0x18
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x1c
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x20
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<int32_t>*() noexcept;

constexpr void __set__array(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__array() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__array() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Stack_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Stack_1<int32_t>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(int32_t  item) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  arrayIndex) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Peek() ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Pop() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Push(int32_t  item) ;

/// @brief Method PushWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void PushWithResize(int32_t  item) ;

/// @brief Method ThrowForEmptyStack addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyStack() ;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Stack_1(Stack_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Stack_1(Stack_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Stack_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Stack`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3856))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3856), inst: 2 })
// CS Name: ::System.Collections.Generic::Stack`1<T>*
class CORDL_TYPE Stack_1<T> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Stack_1__Enumerator<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field DefaultCapacity offset 0x0
static constexpr int32_t  DefaultCapacity{static_cast<int32_t>(0x4)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<T,::Array<T>*>  _array;

/// @brief Field _size offset 0x18
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x1c
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x20
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

constexpr void __set__array(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get__array() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get__array() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Stack_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Stack_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(T  item) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  arrayIndex) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Peek() ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Pop() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Push(T  item) ;

/// @brief Method PushWithResize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void PushWithResize(T  item) ;

/// @brief Method ThrowForEmptyStack addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyStack() ;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Stack_1(Stack_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Stack_1(Stack_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Stack_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::Stack_1, "System.Collections.Generic", "Stack`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::__Stack_1__Enumerator, "System.Collections.Generic", "Stack`1/Enumerator");
