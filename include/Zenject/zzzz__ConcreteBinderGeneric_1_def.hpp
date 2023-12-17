#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FromBinderGeneric_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ConcreteBinderGeneric_1)
namespace Zenject {
template<typename TContract>
class __ConcreteBinderGeneric_1____c__DisplayClass5_0;
}
namespace Zenject {
class FromBinderNonGeneric;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
class ConventionSelectTypesBinder;
}
namespace Zenject {
template<typename TContract>
class FromBinderGeneric_1;
}
namespace System {
class Type;
}
namespace Zenject {
class BindInfo;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__OverrideConfig;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
class IProvider;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class ConcreteBinderGeneric_1;
}
namespace Zenject {
template<typename TContract>
class __ConcreteBinderGeneric_1____c__DisplayClass5_0;
}
namespace Zenject {
template<>
class ConcreteBinderGeneric_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>;
}
namespace Zenject {
template<::cordl_internals::is_or_is_backed_by<int32_t> TContract>
class ConcreteBinderGeneric_1<TContract>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class ConcreteBinderGeneric_1<TContract>;
}
namespace Zenject {
template<>
class ConcreteBinderGeneric_1<float_t>;
}
namespace Zenject {
template<>
class __ConcreteBinderGeneric_1____c__DisplayClass5_0<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class __ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>;
}
namespace Zenject {
template<::cordl_internals::is_or_is_backed_by<int32_t> TContract>
class __ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>;
}
namespace Zenject {
template<>
class __ConcreteBinderGeneric_1____c__DisplayClass5_0<float_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::ConcreteBinderGeneric_1);
MARK_GEN_REF_PTR_T(::Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0);
// Type: ::<>c__DisplayClass5_0
// Type: Zenject::ConcreteBinderGeneric`1
// Type: ::<>c__DisplayClass5_0
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10670))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10670), inst: 6140 })
// CS Name: ::ConcreteBinderGeneric`1::<>c__DisplayClass5_0<TContract>*
class CORDL_TYPE __ConcreteBinderGeneric_1____c__DisplayClass5_0<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field concreteType offset 0x10
 __declspec(property(get=__get_concreteType, put=__set_concreteType)) ::System::Type*  concreteType;

constexpr void __set_concreteType(::System::Type*  value) ;

constexpr ::System::Type* __get_concreteType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_concreteType() const;

static inline ::Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <To>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _To_b__1(::System::Type*  contractType) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__ConcreteBinderGeneric_1____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ConcreteBinderGeneric_1____c__DisplayClass5_0(__ConcreteBinderGeneric_1____c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ConcreteBinderGeneric_1____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ConcreteBinderGeneric_1____c__DisplayClass5_0(__ConcreteBinderGeneric_1____c__DisplayClass5_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ConcreteBinderGeneric_1____c__DisplayClass5_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass5_0
namespace Zenject {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10670)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10670), inst: 974 })
// CS Name: ::ConcreteBinderGeneric`1::<>c__DisplayClass5_0<TContract>*
class CORDL_TYPE __ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field concreteType offset 0x10
 __declspec(property(get=__get_concreteType, put=__set_concreteType)) ::System::Type*  concreteType;

constexpr void __set_concreteType(::System::Type*  value) ;

constexpr ::System::Type* __get_concreteType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_concreteType() const;

static inline ::Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <To>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _To_b__1(::System::Type*  contractType) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__ConcreteBinderGeneric_1____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ConcreteBinderGeneric_1____c__DisplayClass5_0(__ConcreteBinderGeneric_1____c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ConcreteBinderGeneric_1____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ConcreteBinderGeneric_1____c__DisplayClass5_0(__ConcreteBinderGeneric_1____c__DisplayClass5_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ConcreteBinderGeneric_1____c__DisplayClass5_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass5_0
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10670)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10670), inst: 391 })
// CS Name: ::ConcreteBinderGeneric`1::<>c__DisplayClass5_0<TContract>*
class CORDL_TYPE __ConcreteBinderGeneric_1____c__DisplayClass5_0<float_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field concreteType offset 0x10
 __declspec(property(get=__get_concreteType, put=__set_concreteType)) ::System::Type*  concreteType;

constexpr void __set_concreteType(::System::Type*  value) ;

constexpr ::System::Type* __get_concreteType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_concreteType() const;

static inline ::Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <To>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _To_b__1(::System::Type*  contractType) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__ConcreteBinderGeneric_1____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ConcreteBinderGeneric_1____c__DisplayClass5_0(__ConcreteBinderGeneric_1____c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ConcreteBinderGeneric_1____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ConcreteBinderGeneric_1____c__DisplayClass5_0(__ConcreteBinderGeneric_1____c__DisplayClass5_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ConcreteBinderGeneric_1____c__DisplayClass5_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass5_0
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10670)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10670), inst: 2 })
// CS Name: ::ConcreteBinderGeneric`1::<>c__DisplayClass5_0<TContract>*
class CORDL_TYPE __ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field concreteType offset 0x10
 __declspec(property(get=__get_concreteType, put=__set_concreteType)) ::System::Type*  concreteType;

constexpr void __set_concreteType(::System::Type*  value) ;

constexpr ::System::Type* __get_concreteType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_concreteType() const;

static inline ::Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <To>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _To_b__1(::System::Type*  contractType) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__ConcreteBinderGeneric_1____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ConcreteBinderGeneric_1____c__DisplayClass5_0(__ConcreteBinderGeneric_1____c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ConcreteBinderGeneric_1____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ConcreteBinderGeneric_1____c__DisplayClass5_0(__ConcreteBinderGeneric_1____c__DisplayClass5_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ConcreteBinderGeneric_1____c__DisplayClass5_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ConcreteBinderGeneric`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10671)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10914), inst: 1990 }), TypeDefinitionIndex(TypeDefinitionIndex(10914))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10671), inst: 6140 })
// CS Name: ::Zenject::ConcreteBinderGeneric`1<TContract>*
class CORDL_TYPE ConcreteBinderGeneric_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>> : public ::Zenject::FromBinderGeneric_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>> {
public:
// Declarations
using __c__DisplayClass5_0 = ::Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::FromBinderGeneric_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>)]{};

static inline ::Zenject::ConcreteBinderGeneric_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method ToSelf addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FromBinderGeneric_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>* ToSelf() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
inline ::Zenject::FromBinderGeneric_1<TConcrete>* To() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FromBinderNonGeneric* To(::ArrayW<::System::Type*,::Array<::System::Type*>*>  concreteTypes) ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FromBinderNonGeneric* To(::System::Collections::Generic::IEnumerable_1<::System::Type*>*  concreteTypes) ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FromBinderNonGeneric* To(::System::Action_1<::Zenject::ConventionSelectTypesBinder*>*  generator) ;

/// @brief Method <ToSelf>b__1_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::IProvider* _ToSelf_b__1_0(::Zenject::DiContainer*  container, ::System::Type*  type) ;

/// @brief Method <To>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _To_b__5_0(::System::Type*  concreteType) ;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteBinderGeneric_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConcreteBinderGeneric_1(ConcreteBinderGeneric_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteBinderGeneric_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConcreteBinderGeneric_1(ConcreteBinderGeneric_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConcreteBinderGeneric_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ConcreteBinderGeneric`1
namespace Zenject {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10914), inst: 1990 }), TypeDefinitionIndex(TypeDefinitionIndex(10914)), TypeDefinitionIndex(TypeDefinitionIndex(10671))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10671), inst: 974 })
// CS Name: ::Zenject::ConcreteBinderGeneric`1<TContract>*
class CORDL_TYPE ConcreteBinderGeneric_1<TContract> : public ::Zenject::FromBinderGeneric_1<TContract> {
public:
// Declarations
using __c__DisplayClass5_0 = ::Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::FromBinderGeneric_1<TContract>)]{};

static inline ::Zenject::ConcreteBinderGeneric_1<TContract>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method ToSelf addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FromBinderGeneric_1<TContract>* ToSelf() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
inline ::Zenject::FromBinderGeneric_1<TConcrete>* To() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FromBinderNonGeneric* To(::ArrayW<::System::Type*,::Array<::System::Type*>*>  concreteTypes) ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FromBinderNonGeneric* To(::System::Collections::Generic::IEnumerable_1<::System::Type*>*  concreteTypes) ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FromBinderNonGeneric* To(::System::Action_1<::Zenject::ConventionSelectTypesBinder*>*  generator) ;

/// @brief Method <ToSelf>b__1_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::IProvider* _ToSelf_b__1_0(::Zenject::DiContainer*  container, ::System::Type*  type) ;

/// @brief Method <To>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _To_b__5_0(::System::Type*  concreteType) ;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteBinderGeneric_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConcreteBinderGeneric_1(ConcreteBinderGeneric_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteBinderGeneric_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConcreteBinderGeneric_1(ConcreteBinderGeneric_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConcreteBinderGeneric_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ConcreteBinderGeneric`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10914)), TypeDefinitionIndex(TypeDefinitionIndex(10671)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10914), inst: 1990 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10671), inst: 391 })
// CS Name: ::Zenject::ConcreteBinderGeneric`1<TContract>*
class CORDL_TYPE ConcreteBinderGeneric_1<float_t> : public ::Zenject::FromBinderGeneric_1<float_t> {
public:
// Declarations
using __c__DisplayClass5_0 = ::Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<float_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::FromBinderGeneric_1<float_t>)]{};

static inline ::Zenject::ConcreteBinderGeneric_1<float_t>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method ToSelf addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FromBinderGeneric_1<float_t>* ToSelf() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
inline ::Zenject::FromBinderGeneric_1<TConcrete>* To() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FromBinderNonGeneric* To(::ArrayW<::System::Type*,::Array<::System::Type*>*>  concreteTypes) ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FromBinderNonGeneric* To(::System::Collections::Generic::IEnumerable_1<::System::Type*>*  concreteTypes) ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FromBinderNonGeneric* To(::System::Action_1<::Zenject::ConventionSelectTypesBinder*>*  generator) ;

/// @brief Method <ToSelf>b__1_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::IProvider* _ToSelf_b__1_0(::Zenject::DiContainer*  container, ::System::Type*  type) ;

/// @brief Method <To>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _To_b__5_0(::System::Type*  concreteType) ;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteBinderGeneric_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConcreteBinderGeneric_1(ConcreteBinderGeneric_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteBinderGeneric_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConcreteBinderGeneric_1(ConcreteBinderGeneric_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConcreteBinderGeneric_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ConcreteBinderGeneric`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10914), inst: 1990 }), TypeDefinitionIndex(TypeDefinitionIndex(10671)), TypeDefinitionIndex(TypeDefinitionIndex(10914))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10671), inst: 2 })
// CS Name: ::Zenject::ConcreteBinderGeneric`1<TContract>*
class CORDL_TYPE ConcreteBinderGeneric_1<TContract> : public ::Zenject::FromBinderGeneric_1<TContract> {
public:
// Declarations
using __c__DisplayClass5_0 = ::Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::FromBinderGeneric_1<TContract>)]{};

static inline ::Zenject::ConcreteBinderGeneric_1<TContract>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::BindStatement*  bindStatement) ;

/// @brief Method ToSelf addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FromBinderGeneric_1<TContract>* ToSelf() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
inline ::Zenject::FromBinderGeneric_1<TConcrete>* To() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FromBinderNonGeneric* To(::ArrayW<::System::Type*,::Array<::System::Type*>*>  concreteTypes) ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FromBinderNonGeneric* To(::System::Collections::Generic::IEnumerable_1<::System::Type*>*  concreteTypes) ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FromBinderNonGeneric* To(::System::Action_1<::Zenject::ConventionSelectTypesBinder*>*  generator) ;

/// @brief Method <ToSelf>b__1_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::IProvider* _ToSelf_b__1_0(::Zenject::DiContainer*  container, ::System::Type*  type) ;

/// @brief Method <To>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _To_b__5_0(::System::Type*  concreteType) ;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteBinderGeneric_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConcreteBinderGeneric_1(ConcreteBinderGeneric_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConcreteBinderGeneric_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConcreteBinderGeneric_1(ConcreteBinderGeneric_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConcreteBinderGeneric_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ConcreteBinderGeneric_1, "Zenject", "ConcreteBinderGeneric`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0, "Zenject", "ConcreteBinderGeneric`1/<>c__DisplayClass5_0");
