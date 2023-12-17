#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Lazy_1)
namespace System {
template<typename TResult>
class Func_1;
}
namespace System::Threading {
struct LazyThreadSafetyMode;
}
namespace System {
class LazyHelper;
}
// Forward declare root types
namespace System {
template<typename T>
class Lazy_1;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T>
class Lazy_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Lazy_1);
// Type: System::Lazy`1
// Type: System::Lazy`1
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2432))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2432), inst: 2 })
// CS Name: ::System::Lazy`1<T>*
class CORDL_TYPE Lazy_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _state offset 0x10
 __declspec(property(get=__get__state, put=__set__state)) ::System::LazyHelper*  _state;

/// @brief Field _factory offset 0x18
 __declspec(property(get=__get__factory, put=__set__factory)) ::System::Func_1<T>*  _factory;

/// @brief Field _value offset 0x20
 __declspec(property(get=__get__value, put=__set__value)) T  _value;

 __declspec(property(get=get_IsValueCreated)) bool  IsValueCreated;

 __declspec(property(get=get_Value)) T  Value;

constexpr void __set__state(::System::LazyHelper*  value) ;

constexpr ::System::LazyHelper* __get__state() ;

constexpr ::cordl_internals::to_const_pointer<::System::LazyHelper*> __get__state() const;

constexpr void __set__factory(::System::Func_1<T>*  value) ;

constexpr ::System::Func_1<T>* __get__factory() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> __get__factory() const;

constexpr void __set__value(T  value) ;

constexpr T& __get__value() ;

constexpr T const& __get__value() const;

/// @brief Method CreateViaDefaultConstructor addr 0x0 size 0xffffffffffffffff virtual false final false
static inline T CreateViaDefaultConstructor() ;

static inline ::System::Lazy_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Lazy_1<T>* New_ctor(::System::Func_1<T>*  valueFactory) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<T>*  valueFactory) ;

static inline ::System::Lazy_1<T>* New_ctor(::System::Func_1<T>*  valueFactory, ::System::Threading::LazyThreadSafetyMode  mode, bool  useDefaultConstructor) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<T>*  valueFactory, ::System::Threading::LazyThreadSafetyMode  mode, bool  useDefaultConstructor) ;

/// @brief Method ViaConstructor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ViaConstructor() ;

/// @brief Method ViaFactory addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ViaFactory(::System::Threading::LazyThreadSafetyMode  mode) ;

/// @brief Method ExecutionAndPublication addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ExecutionAndPublication(::System::LazyHelper*  executionAndPublication, bool  useDefaultConstructor) ;

/// @brief Method PublicationOnly addr 0x0 size 0xffffffffffffffff virtual false final false
inline void PublicationOnly(::System::LazyHelper*  publicationOnly, T  possibleValue) ;

/// @brief Method PublicationOnlyViaConstructor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void PublicationOnlyViaConstructor(::System::LazyHelper*  initializer) ;

/// @brief Method PublicationOnlyViaFactory addr 0x0 size 0xffffffffffffffff virtual false final false
inline void PublicationOnlyViaFactory(::System::LazyHelper*  initializer) ;

/// @brief Method PublicationOnlyWaitForOtherThreadToPublish addr 0x0 size 0xffffffffffffffff virtual false final false
inline void PublicationOnlyWaitForOtherThreadToPublish() ;

/// @brief Method CreateValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline T CreateValue() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method get_IsValueCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsValueCreated() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "Lazy_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Lazy_1(Lazy_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Lazy_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Lazy_1(Lazy_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Lazy_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Lazy_1, "System", "Lazy`1");
