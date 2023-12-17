#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DisposableManager)
namespace Zenject {
class __DisposableManager____c;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class __DisposableManager____c__DisplayClass4_0;
}
namespace Zenject {
struct __DisposableManager__DisposableInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace ModestTree::Util {
template<typename T1,typename T2>
class ValuePair_2;
}
namespace Zenject {
class __DisposableManager____c__DisplayClass9_0;
}
namespace Zenject {
class __DisposableManager__LateDisposableInfo;
}
namespace Zenject {
class __DisposableManager____c__DisplayClass4_1;
}
namespace Zenject {
class ILateDisposable;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
class DisposableManager;
}
namespace Zenject {
class __DisposableManager__LateDisposableInfo;
}
namespace Zenject {
class __DisposableManager____c;
}
namespace Zenject {
class __DisposableManager____c__DisplayClass4_0;
}
namespace Zenject {
class __DisposableManager____c__DisplayClass4_1;
}
namespace Zenject {
class __DisposableManager____c__DisplayClass9_0;
}
namespace Zenject {
struct __DisposableManager__DisposableInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::DisposableManager);
MARK_REF_PTR_T(::Zenject::__DisposableManager__LateDisposableInfo);
MARK_REF_PTR_T(::Zenject::__DisposableManager____c);
MARK_REF_PTR_T(::Zenject::__DisposableManager____c__DisplayClass4_0);
MARK_REF_PTR_T(::Zenject::__DisposableManager____c__DisplayClass4_1);
MARK_REF_PTR_T(::Zenject::__DisposableManager____c__DisplayClass9_0);
MARK_VAL_T(::Zenject::__DisposableManager__DisposableInfo);
// Type: ::DisposableInfo
namespace Zenject {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11305))
// CS Name: ::DisposableManager::DisposableInfo
struct CORDL_TYPE __DisposableManager__DisposableInfo : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Disposable offset 0x0
 __declspec(property(get=__get_Disposable, put=__set_Disposable)) ::System::IDisposable*  Disposable;

/// @brief Field Priority offset 0x8
 __declspec(property(get=__get_Priority, put=__set_Priority)) int32_t  Priority;

constexpr void __set_Disposable(::System::IDisposable*  value) ;

constexpr ::System::IDisposable* __get_Disposable() ;

constexpr ::cordl_internals::to_const_pointer<::System::IDisposable*> __get_Disposable() const;

constexpr void __set_Priority(int32_t  value) ;

constexpr int32_t& __get_Priority() ;

constexpr int32_t const& __get_Priority() const;

/// @brief Method .ctor addr 0x2f0f868 size 0xc virtual false final false
inline void _ctor(::System::IDisposable*  disposable, int32_t  priority) ;

// Ctor Parameters [CppParam { name: "Disposable", ty: "::System::IDisposable*", modifiers: "", def_value: None }, CppParam { name: "Priority", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __DisposableManager__DisposableInfo(::System::IDisposable*  Disposable, int32_t  Priority) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __DisposableManager__DisposableInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __DisposableManager__DisposableInfo()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DisposableManager__DisposableInfo, 0x10>, "Size mismatch!");

} // namespace end def Zenject
// Type: ::LateDisposableInfo
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11306))
// CS Name: ::DisposableManager::LateDisposableInfo*
class CORDL_TYPE __DisposableManager__LateDisposableInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field LateDisposable offset 0x10
 __declspec(property(get=__get_LateDisposable, put=__set_LateDisposable)) ::Zenject::ILateDisposable*  LateDisposable;

/// @brief Field Priority offset 0x18
 __declspec(property(get=__get_Priority, put=__set_Priority)) int32_t  Priority;

constexpr void __set_LateDisposable(::Zenject::ILateDisposable*  value) ;

constexpr ::Zenject::ILateDisposable* __get_LateDisposable() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::ILateDisposable*> __get_LateDisposable() const;

constexpr void __set_Priority(int32_t  value) ;

constexpr int32_t& __get_Priority() ;

constexpr int32_t const& __get_Priority() const;

static inline ::Zenject::__DisposableManager__LateDisposableInfo* New_ctor(::Zenject::ILateDisposable*  lateDisposable, int32_t  priority) ;

/// @brief Method .ctor addr 0x2f0f87c size 0x30 virtual false final false
inline void _ctor(::Zenject::ILateDisposable*  lateDisposable, int32_t  priority) ;

/// @brief Method __zenCreate addr 0x2f10a18 size 0x110 virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f10b28 size 0x304 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__DisposableManager__LateDisposableInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DisposableManager__LateDisposableInfo(__DisposableManager__LateDisposableInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DisposableManager__LateDisposableInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DisposableManager__LateDisposableInfo(__DisposableManager__LateDisposableInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DisposableManager__LateDisposableInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DisposableManager__LateDisposableInfo, 0x20>, "Size mismatch!");

} // namespace end def Zenject
// Type: ::<>c__DisplayClass4_0
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11307))
// CS Name: ::DisposableManager::<>c__DisplayClass4_0*
class CORDL_TYPE __DisposableManager____c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field disposable offset 0x10
 __declspec(property(get=__get_disposable, put=__set_disposable)) ::System::IDisposable*  disposable;

constexpr void __set_disposable(::System::IDisposable*  value) ;

constexpr ::System::IDisposable* __get_disposable() ;

constexpr ::cordl_internals::to_const_pointer<::System::IDisposable*> __get_disposable() const;

static inline ::Zenject::__DisposableManager____c__DisplayClass4_0* New_ctor() ;

/// @brief Method .ctor addr 0x2f0f860 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <.ctor>b__0 addr 0x2f10e2c size 0x80 virtual false final false
inline bool __ctor_b__0(::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*  x) ;

/// @brief Method __zenCreate addr 0x2f10eac size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f10f08 size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__DisposableManager____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DisposableManager____c__DisplayClass4_0(__DisposableManager____c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DisposableManager____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DisposableManager____c__DisplayClass4_0(__DisposableManager____c__DisplayClass4_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DisposableManager____c__DisplayClass4_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DisposableManager____c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace end def Zenject
// Type: ::<>c__DisplayClass4_1
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11308))
// CS Name: ::DisposableManager::<>c__DisplayClass4_1*
class CORDL_TYPE __DisposableManager____c__DisplayClass4_1 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field lateDisposable offset 0x10
 __declspec(property(get=__get_lateDisposable, put=__set_lateDisposable)) ::Zenject::ILateDisposable*  lateDisposable;

constexpr void __set_lateDisposable(::Zenject::ILateDisposable*  value) ;

constexpr ::Zenject::ILateDisposable* __get_lateDisposable() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::ILateDisposable*> __get_lateDisposable() const;

static inline ::Zenject::__DisposableManager____c__DisplayClass4_1* New_ctor() ;

/// @brief Method .ctor addr 0x2f0f874 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <.ctor>b__2 addr 0x2f110c8 size 0x80 virtual false final false
inline bool __ctor_b__2(::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*  x) ;

/// @brief Method __zenCreate addr 0x2f11148 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f111a4 size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__DisposableManager____c__DisplayClass4_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DisposableManager____c__DisplayClass4_1(__DisposableManager____c__DisplayClass4_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DisposableManager____c__DisplayClass4_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DisposableManager____c__DisplayClass4_1(__DisposableManager____c__DisplayClass4_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DisposableManager____c__DisplayClass4_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DisposableManager____c__DisplayClass4_1, 0x18>, "Size mismatch!");

} // namespace end def Zenject
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11309))
// CS Name: ::DisposableManager::<>c*
class CORDL_TYPE __DisposableManager____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::Zenject::__DisposableManager____c*  value) ;

static inline ::Zenject::__DisposableManager____c* getStaticF___9() ;

static inline void setStaticF___9__4_1(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*,::System::Nullable_1<int32_t>>*  value) ;

static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*,::System::Nullable_1<int32_t>>* getStaticF___9__4_1() ;

static inline void setStaticF___9__4_3(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*,::System::Nullable_1<int32_t>>*  value) ;

static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*,::System::Nullable_1<int32_t>>* getStaticF___9__4_3() ;

static inline void setStaticF___9__10_0(::System::Func_2<::Zenject::__DisposableManager__LateDisposableInfo*,int32_t>*  value) ;

static inline ::System::Func_2<::Zenject::__DisposableManager__LateDisposableInfo*,int32_t>* getStaticF___9__10_0() ;

static inline void setStaticF___9__11_0(::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>*  value) ;

static inline ::System::Func_2<::Zenject::__DisposableManager__DisposableInfo,int32_t>* getStaticF___9__11_0() ;

static inline ::Zenject::__DisposableManager____c* New_ctor() ;

/// @brief Method .ctor addr 0x2f113c8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <.ctor>b__4_1 addr 0x2f113d0 size 0x60 virtual false final false
inline ::System::Nullable_1<int32_t> __ctor_b__4_1(::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*  x) ;

/// @brief Method <.ctor>b__4_3 addr 0x2f11430 size 0x60 virtual false final false
inline ::System::Nullable_1<int32_t> __ctor_b__4_3(::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*  x) ;

/// @brief Method <LateDispose>b__10_0 addr 0x2f11490 size 0x18 virtual false final false
inline int32_t _LateDispose_b__10_0(::Zenject::__DisposableManager__LateDisposableInfo*  x) ;

/// @brief Method <Dispose>b__11_0 addr 0x2f114a8 size 0x8 virtual false final false
inline int32_t _Dispose_b__11_0(::Zenject::__DisposableManager__DisposableInfo  x) ;

/// @brief Method __zenCreate addr 0x2f114b0 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f1150c size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__DisposableManager____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DisposableManager____c(__DisposableManager____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DisposableManager____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DisposableManager____c(__DisposableManager____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DisposableManager____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__4_1

// Static field <>9__4_3

// Static field <>9__10_0

// Static field <>9__11_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DisposableManager____c, 0x10>, "Size mismatch!");

} // namespace end def Zenject
// Type: ::<>c__DisplayClass9_0
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11310))
// CS Name: ::DisposableManager::<>c__DisplayClass9_0*
class CORDL_TYPE __DisposableManager____c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field disposable offset 0x10
 __declspec(property(get=__get_disposable, put=__set_disposable)) ::System::IDisposable*  disposable;

constexpr void __set_disposable(::System::IDisposable*  value) ;

constexpr ::System::IDisposable* __get_disposable() ;

constexpr ::cordl_internals::to_const_pointer<::System::IDisposable*> __get_disposable() const;

static inline ::Zenject::__DisposableManager____c__DisplayClass9_0* New_ctor() ;

/// @brief Method .ctor addr 0x2f0fb94 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Remove>b__0 addr 0x2f116cc size 0x10 virtual false final false
inline bool _Remove_b__0(::Zenject::__DisposableManager__DisposableInfo  x) ;

/// @brief Method __zenCreate addr 0x2f116dc size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f11738 size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__DisposableManager____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DisposableManager____c__DisplayClass9_0(__DisposableManager____c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DisposableManager____c__DisplayClass9_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DisposableManager____c__DisplayClass9_0(__DisposableManager____c__DisplayClass9_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DisposableManager____c__DisplayClass9_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DisposableManager____c__DisplayClass9_0, 0x18>, "Size mismatch!");

} // namespace end def Zenject
// Type: Zenject::DisposableManager
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11311))
// CS Name: ::Zenject::DisposableManager*
class CORDL_TYPE DisposableManager : public ::System::Object {
public:
// Declarations
using __c__DisplayClass9_0 = ::Zenject::__DisposableManager____c__DisplayClass9_0;

using __c = ::Zenject::__DisposableManager____c;

using __c__DisplayClass4_1 = ::Zenject::__DisposableManager____c__DisplayClass4_1;

using __c__DisplayClass4_0 = ::Zenject::__DisposableManager____c__DisplayClass4_0;

using LateDisposableInfo = ::Zenject::__DisposableManager__LateDisposableInfo;

using DisposableInfo = ::Zenject::__DisposableManager__DisposableInfo;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _disposables offset 0x10
 __declspec(property(get=__get__disposables, put=__set__disposables)) ::System::Collections::Generic::List_1<::Zenject::__DisposableManager__DisposableInfo>*  _disposables;

/// @brief Field _lateDisposables offset 0x18
 __declspec(property(get=__get__lateDisposables, put=__set__lateDisposables)) ::System::Collections::Generic::List_1<::Zenject::__DisposableManager__LateDisposableInfo*>*  _lateDisposables;

/// @brief Field _disposed offset 0x20
 __declspec(property(get=__get__disposed, put=__set__disposed)) bool  _disposed;

/// @brief Field _lateDisposed offset 0x21
 __declspec(property(get=__get__lateDisposed, put=__set__lateDisposed)) bool  _lateDisposed;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set__disposables(::System::Collections::Generic::List_1<::Zenject::__DisposableManager__DisposableInfo>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::__DisposableManager__DisposableInfo>* __get__disposables() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::__DisposableManager__DisposableInfo>*> __get__disposables() const;

constexpr void __set__lateDisposables(::System::Collections::Generic::List_1<::Zenject::__DisposableManager__LateDisposableInfo*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::__DisposableManager__LateDisposableInfo*>* __get__lateDisposables() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::__DisposableManager__LateDisposableInfo*>*> __get__lateDisposables() const;

constexpr void __set__disposed(bool  value) ;

constexpr bool& __get__disposed() ;

constexpr bool const& __get__disposed() const;

constexpr void __set__lateDisposed(bool  value) ;

constexpr bool& __get__lateDisposed() ;

constexpr bool const& __get__lateDisposed() const;

static inline ::Zenject::DisposableManager* New_ctor(::System::Collections::Generic::List_1<::System::IDisposable*>*  disposables, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*  priorities, ::System::Collections::Generic::List_1<::Zenject::ILateDisposable*>*  lateDisposables, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*  latePriorities) ;

/// @brief Method .ctor addr 0x2f0f030 size 0x830 virtual false final false
inline void _ctor(::System::Collections::Generic::List_1<::System::IDisposable*>*  disposables, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*  priorities, ::System::Collections::Generic::List_1<::Zenject::ILateDisposable*>*  lateDisposables, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*  latePriorities) ;

/// @brief Method Add addr 0x2f0f8ac size 0x8 virtual false final false
inline void Add(::System::IDisposable*  disposable) ;

/// @brief Method Add addr 0x2f0f8b4 size 0xbc virtual false final false
inline void Add(::System::IDisposable*  disposable, int32_t  priority) ;

/// @brief Method AddLate addr 0x2f0f970 size 0x8 virtual false final false
inline void AddLate(::Zenject::ILateDisposable*  disposable) ;

/// @brief Method AddLate addr 0x2f0f978 size 0xf0 virtual false final false
inline void AddLate(::Zenject::ILateDisposable*  disposable, int32_t  priority) ;

/// @brief Method Remove addr 0x2f0fa68 size 0x12c virtual false final false
inline void Remove(::System::IDisposable*  disposable) ;

/// @brief Method LateDispose addr 0x2f0fb9c size 0x45c virtual false final false
inline void LateDispose() ;

/// @brief Method Dispose addr 0x2f0fff8 size 0x438 virtual true final true
inline void Dispose() ;

/// @brief Method __zenCreate addr 0x2f10430 size 0x1c4 virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f105f4 size 0x424 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "DisposableManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DisposableManager(DisposableManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisposableManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisposableManager(DisposableManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DisposableManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::DisposableManager, 0x28>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::DisposableManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DisposableManager*, "Zenject", "DisposableManager");
NEED_NO_BOX(::Zenject::__DisposableManager__LateDisposableInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DisposableManager__LateDisposableInfo*, "Zenject", "DisposableManager/LateDisposableInfo");
NEED_NO_BOX(::Zenject::__DisposableManager____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DisposableManager____c*, "Zenject", "DisposableManager/<>c");
NEED_NO_BOX(::Zenject::__DisposableManager____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DisposableManager____c__DisplayClass4_0*, "Zenject", "DisposableManager/<>c__DisplayClass4_0");
NEED_NO_BOX(::Zenject::__DisposableManager____c__DisplayClass4_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DisposableManager____c__DisplayClass4_1*, "Zenject", "DisposableManager/<>c__DisplayClass4_1");
NEED_NO_BOX(::Zenject::__DisposableManager____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DisposableManager____c__DisplayClass9_0*, "Zenject", "DisposableManager/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DisposableManager__DisposableInfo, "Zenject", "DisposableManager/DisposableInfo");
