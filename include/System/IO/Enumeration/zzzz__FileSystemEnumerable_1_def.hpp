#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/Enumeration/zzzz__FileSystemEnumerator_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileSystemEnumerable_1)
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO::Enumeration {
template<typename TResult>
class __FileSystemEnumerable_1__FindTransform;
}
namespace System::IO::Enumeration {
template<typename TResult>
class __FileSystemEnumerable_1__FindPredicate;
}
namespace System::IO::Enumeration {
template<typename TResult>
class __FileSystemEnumerable_1__DelegateEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::IO {
class EnumerationOptions;
}
namespace System::IO::Enumeration {
struct FileSystemEntry;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::IO::Enumeration {
template<typename TResult>
class FileSystemEnumerable_1;
}
namespace System::IO::Enumeration {
template<typename TResult>
class __FileSystemEnumerable_1__DelegateEnumerator;
}
namespace System::IO::Enumeration {
template<typename TResult>
class __FileSystemEnumerable_1__FindPredicate;
}
namespace System::IO::Enumeration {
template<typename TResult>
class __FileSystemEnumerable_1__FindTransform;
}
namespace System::IO::Enumeration {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class FileSystemEnumerable_1<TResult>;
}
namespace System::IO::Enumeration {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class __FileSystemEnumerable_1__DelegateEnumerator<TResult>;
}
namespace System::IO::Enumeration {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class __FileSystemEnumerable_1__FindPredicate<TResult>;
}
namespace System::IO::Enumeration {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class __FileSystemEnumerable_1__FindTransform<TResult>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::IO::Enumeration::FileSystemEnumerable_1);
MARK_GEN_REF_PTR_T(::System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator);
MARK_GEN_REF_PTR_T(::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate);
MARK_GEN_REF_PTR_T(::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform);
// Type: ::FindPredicate
// Type: ::FindTransform
// Type: ::DelegateEnumerator
// Type: System.IO.Enumeration::FileSystemEnumerable`1
// Type: ::FindPredicate
namespace System::IO::Enumeration {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(3643))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3643), inst: 2 })
// CS Name: ::FileSystemEnumerable`1::FindPredicate<TResult>*
class CORDL_TYPE __FileSystemEnumerable_1__FindPredicate<TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(ByRef<::System::IO::Enumeration::FileSystemEntry>  entry) ;

// Ctor Parameters [CppParam { name: "", ty: "__FileSystemEnumerable_1__FindPredicate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FileSystemEnumerable_1__FindPredicate(__FileSystemEnumerable_1__FindPredicate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FileSystemEnumerable_1__FindPredicate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FileSystemEnumerable_1__FindPredicate(__FileSystemEnumerable_1__FindPredicate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FileSystemEnumerable_1__FindPredicate()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
// Type: ::FindTransform
namespace System::IO::Enumeration {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(3644))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3644), inst: 2 })
// CS Name: ::FileSystemEnumerable`1::FindTransform<TResult>*
class CORDL_TYPE __FileSystemEnumerable_1__FindTransform<TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult Invoke(ByRef<::System::IO::Enumeration::FileSystemEntry>  entry) ;

// Ctor Parameters [CppParam { name: "", ty: "__FileSystemEnumerable_1__FindTransform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FileSystemEnumerable_1__FindTransform(__FileSystemEnumerable_1__FindTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FileSystemEnumerable_1__FindTransform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FileSystemEnumerable_1__FindTransform(__FileSystemEnumerable_1__FindTransform const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FileSystemEnumerable_1__FindTransform()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
// Type: ::DelegateEnumerator
namespace System::IO::Enumeration {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3655), inst: 1976 }), TypeDefinitionIndex(TypeDefinitionIndex(3645)), TypeDefinitionIndex(TypeDefinitionIndex(3655))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3645), inst: 2 })
// CS Name: ::FileSystemEnumerable`1::DelegateEnumerator<TResult>*
class CORDL_TYPE __FileSystemEnumerable_1__DelegateEnumerator<TResult> : public ::System::IO::Enumeration::FileSystemEnumerator_1<TResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::IO::Enumeration::FileSystemEnumerator_1<TResult>)]{};

/// @brief Field _enumerable offset 0x78
 __declspec(property(get=__get__enumerable, put=__set__enumerable)) ::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*  _enumerable;

constexpr void __set__enumerable(::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*  value) ;

constexpr ::System::IO::Enumeration::FileSystemEnumerable_1<TResult>* __get__enumerable() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*> __get__enumerable() const;

static inline ::System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>* New_ctor(::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*  enumerable) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*  enumerable) ;

/// @brief Method TransformEntry addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult TransformEntry(ByRef<::System::IO::Enumeration::FileSystemEntry>  entry) ;

/// @brief Method ShouldRecurseIntoEntry addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool ShouldRecurseIntoEntry(ByRef<::System::IO::Enumeration::FileSystemEntry>  entry) ;

/// @brief Method ShouldIncludeEntry addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool ShouldIncludeEntry(ByRef<::System::IO::Enumeration::FileSystemEntry>  entry) ;

// Ctor Parameters [CppParam { name: "", ty: "__FileSystemEnumerable_1__DelegateEnumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FileSystemEnumerable_1__DelegateEnumerator(__FileSystemEnumerable_1__DelegateEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FileSystemEnumerable_1__DelegateEnumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FileSystemEnumerable_1__DelegateEnumerator(__FileSystemEnumerable_1__DelegateEnumerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FileSystemEnumerable_1__DelegateEnumerator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
// Type: System.IO.Enumeration::FileSystemEnumerable`1
namespace System::IO::Enumeration {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3646))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3646), inst: 2 })
// CS Name: ::System.IO.Enumeration::FileSystemEnumerable`1<TResult>*
class CORDL_TYPE FileSystemEnumerable_1<TResult> : public ::System::Object {
public:
// Declarations
using DelegateEnumerator = ::System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>;

using FindTransform = ::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>;

using FindPredicate = ::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field _enumerator offset 0x10
 __declspec(property(get=__get__enumerator, put=__set__enumerator)) ::System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>*  _enumerator;

/// @brief Field _transform offset 0x18
 __declspec(property(get=__get__transform, put=__set__transform)) ::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>*  _transform;

/// @brief Field _options offset 0x20
 __declspec(property(get=__get__options, put=__set__options)) ::System::IO::EnumerationOptions*  _options;

/// @brief Field _directory offset 0x28
 __declspec(property(get=__get__directory, put=__set__directory)) ::StringW  _directory;

/// @brief Field <ShouldIncludePredicate>k__BackingField offset 0x30
 __declspec(property(get=__get__ShouldIncludePredicate_k__BackingField, put=__set__ShouldIncludePredicate_k__BackingField)) ::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>*  _ShouldIncludePredicate_k__BackingField;

/// @brief Field <ShouldRecursePredicate>k__BackingField offset 0x38
 __declspec(property(get=__get__ShouldRecursePredicate_k__BackingField, put=__set__ShouldRecursePredicate_k__BackingField)) ::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>*  _ShouldRecursePredicate_k__BackingField;

 __declspec(property(get=get_ShouldIncludePredicate, put=set_ShouldIncludePredicate)) ::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>*  ShouldIncludePredicate;

 __declspec(property(get=get_ShouldRecursePredicate)) ::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>*  ShouldRecursePredicate;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TResult>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TResult>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set__enumerator(::System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>*  value) ;

constexpr ::System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>* __get__enumerator() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>*> __get__enumerator() const;

constexpr void __set__transform(::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>*  value) ;

constexpr ::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>* __get__transform() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>*> __get__transform() const;

constexpr void __set__options(::System::IO::EnumerationOptions*  value) ;

constexpr ::System::IO::EnumerationOptions* __get__options() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::EnumerationOptions*> __get__options() const;

constexpr void __set__directory(::StringW  value) ;

constexpr ::StringW& __get__directory() ;

constexpr ::StringW const& __get__directory() const;

constexpr void __set__ShouldIncludePredicate_k__BackingField(::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>*  value) ;

constexpr ::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>* __get__ShouldIncludePredicate_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>*> __get__ShouldIncludePredicate_k__BackingField() const;

constexpr void __set__ShouldRecursePredicate_k__BackingField(::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>*  value) ;

constexpr ::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>* __get__ShouldRecursePredicate_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>*> __get__ShouldRecursePredicate_k__BackingField() const;

static inline ::System::IO::Enumeration::FileSystemEnumerable_1<TResult>* New_ctor(::StringW  directory, ::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>*  transform, ::System::IO::EnumerationOptions*  options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  directory, ::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>*  transform, ::System::IO::EnumerationOptions*  options) ;

/// @brief Method get_ShouldIncludePredicate addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>* get_ShouldIncludePredicate() ;

/// @brief Method set_ShouldIncludePredicate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_ShouldIncludePredicate(::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>*  value) ;

/// @brief Method get_ShouldRecursePredicate addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>* get_ShouldRecursePredicate() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<TResult>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerable_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileSystemEnumerable_1(FileSystemEnumerable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileSystemEnumerable_1(FileSystemEnumerable_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FileSystemEnumerable_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IO::Enumeration::FileSystemEnumerable_1, "System.IO.Enumeration", "FileSystemEnumerable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator, "System.IO.Enumeration", "FileSystemEnumerable`1/DelegateEnumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate, "System.IO.Enumeration", "FileSystemEnumerable`1/FindPredicate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform, "System.IO.Enumeration", "FileSystemEnumerable`1/FindTransform");
