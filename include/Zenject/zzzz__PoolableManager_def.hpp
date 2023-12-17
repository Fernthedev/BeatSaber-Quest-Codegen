#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PoolableManager)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class IPoolable;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class __PoolableManager____c__DisplayClass3_0;
}
namespace Zenject {
struct __PoolableManager__PoolableInfo;
}
namespace ModestTree::Util {
template<typename T1,typename T2>
class ValuePair_2;
}
namespace System {
class Type;
}
namespace Zenject {
class __PoolableManager____c__DisplayClass2_0;
}
namespace Zenject {
class __PoolableManager____c;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Zenject {
class PoolableManager;
}
namespace Zenject {
class __PoolableManager____c;
}
namespace Zenject {
class __PoolableManager____c__DisplayClass2_0;
}
namespace Zenject {
class __PoolableManager____c__DisplayClass3_0;
}
namespace Zenject {
struct __PoolableManager__PoolableInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PoolableManager);
MARK_REF_PTR_T(::Zenject::__PoolableManager____c);
MARK_REF_PTR_T(::Zenject::__PoolableManager____c__DisplayClass2_0);
MARK_REF_PTR_T(::Zenject::__PoolableManager____c__DisplayClass3_0);
MARK_VAL_T(::Zenject::__PoolableManager__PoolableInfo);
// Type: ::PoolableInfo
namespace Zenject {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11327))
// CS Name: ::PoolableManager::PoolableInfo
struct CORDL_TYPE __PoolableManager__PoolableInfo : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Poolable offset 0x0
 __declspec(property(get=__get_Poolable, put=__set_Poolable)) ::Zenject::IPoolable*  Poolable;

/// @brief Field Priority offset 0x8
 __declspec(property(get=__get_Priority, put=__set_Priority)) int32_t  Priority;

constexpr void __set_Poolable(::Zenject::IPoolable*  value) ;

constexpr ::Zenject::IPoolable* __get_Poolable() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::IPoolable*> __get_Poolable() const;

constexpr void __set_Priority(int32_t  value) ;

constexpr int32_t& __get_Priority() ;

constexpr int32_t const& __get_Priority() const;

/// @brief Method .ctor addr 0x2f17358 size 0xc virtual false final false
inline void _ctor(::Zenject::IPoolable*  poolable, int32_t  priority) ;

// Ctor Parameters [CppParam { name: "Poolable", ty: "::Zenject::IPoolable*", modifiers: "", def_value: None }, CppParam { name: "Priority", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __PoolableManager__PoolableInfo(::Zenject::IPoolable*  Poolable, int32_t  Priority) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PoolableManager__PoolableInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PoolableManager__PoolableInfo()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PoolableManager__PoolableInfo, 0x10>, "Size mismatch!");

} // namespace end def Zenject
// Type: ::<>c__DisplayClass2_0
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11328))
// CS Name: ::PoolableManager::<>c__DisplayClass2_0*
class CORDL_TYPE __PoolableManager____c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::Zenject::PoolableManager*  __4__this;

/// @brief Field priorities offset 0x18
 __declspec(property(get=__get_priorities, put=__set_priorities)) ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*  priorities;

constexpr void __set___4__this(::Zenject::PoolableManager*  value) ;

constexpr ::Zenject::PoolableManager* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::PoolableManager*> __get___4__this() const;

constexpr void __set_priorities(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>* __get_priorities() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*> __get_priorities() const;

static inline ::Zenject::__PoolableManager____c__DisplayClass2_0* New_ctor() ;

/// @brief Method .ctor addr 0x2f17130 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <.ctor>b__0 addr 0x2f179ac size 0x1c virtual false final false
inline ::Zenject::__PoolableManager__PoolableInfo __ctor_b__0(::Zenject::IPoolable*  x) ;

/// @brief Method __zenCreate addr 0x2f179c8 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f17a24 size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__PoolableManager____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PoolableManager____c__DisplayClass2_0(__PoolableManager____c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PoolableManager____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PoolableManager____c__DisplayClass2_0(__PoolableManager____c__DisplayClass2_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PoolableManager____c__DisplayClass2_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PoolableManager____c__DisplayClass2_0, 0x20>, "Size mismatch!");

} // namespace end def Zenject
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11329))
// CS Name: ::PoolableManager::<>c*
class CORDL_TYPE __PoolableManager____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::Zenject::__PoolableManager____c*  value) ;

static inline ::Zenject::__PoolableManager____c* getStaticF___9() ;

static inline void setStaticF___9__2_1(::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>*  value) ;

static inline ::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,int32_t>* getStaticF___9__2_1() ;

static inline void setStaticF___9__2_2(::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,::Zenject::IPoolable*>*  value) ;

static inline ::System::Func_2<::Zenject::__PoolableManager__PoolableInfo,::Zenject::IPoolable*>* getStaticF___9__2_2() ;

static inline void setStaticF___9__3_1(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*,::System::Nullable_1<int32_t>>*  value) ;

static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*,::System::Nullable_1<int32_t>>* getStaticF___9__3_1() ;

static inline ::Zenject::__PoolableManager____c* New_ctor() ;

/// @brief Method .ctor addr 0x2f17c48 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <.ctor>b__2_1 addr 0x2f17c50 size 0x8 virtual false final false
inline int32_t __ctor_b__2_1(::Zenject::__PoolableManager__PoolableInfo  x) ;

/// @brief Method <.ctor>b__2_2 addr 0x2f17c58 size 0x8 virtual false final false
inline ::Zenject::IPoolable* __ctor_b__2_2(::Zenject::__PoolableManager__PoolableInfo  x) ;

/// @brief Method <CreatePoolableInfo>b__3_1 addr 0x2f17c60 size 0x60 virtual false final false
inline ::System::Nullable_1<int32_t> _CreatePoolableInfo_b__3_1(::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*  x) ;

/// @brief Method __zenCreate addr 0x2f17cc0 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f17d1c size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__PoolableManager____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PoolableManager____c(__PoolableManager____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PoolableManager____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PoolableManager____c(__PoolableManager____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PoolableManager____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__2_1

// Static field <>9__2_2

// Static field <>9__3_1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PoolableManager____c, 0x10>, "Size mismatch!");

} // namespace end def Zenject
// Type: ::<>c__DisplayClass3_0
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11330))
// CS Name: ::PoolableManager::<>c__DisplayClass3_0*
class CORDL_TYPE __PoolableManager____c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field poolable offset 0x10
 __declspec(property(get=__get_poolable, put=__set_poolable)) ::Zenject::IPoolable*  poolable;

constexpr void __set_poolable(::Zenject::IPoolable*  value) ;

constexpr ::Zenject::IPoolable* __get_poolable() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::IPoolable*> __get_poolable() const;

static inline ::Zenject::__PoolableManager____c__DisplayClass3_0* New_ctor() ;

/// @brief Method .ctor addr 0x2f17350 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <CreatePoolableInfo>b__0 addr 0x2f17edc size 0x80 virtual false final false
inline bool _CreatePoolableInfo_b__0(::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*  x) ;

/// @brief Method __zenCreate addr 0x2f17f5c size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f17fb8 size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__PoolableManager____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PoolableManager____c__DisplayClass3_0(__PoolableManager____c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PoolableManager____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PoolableManager____c__DisplayClass3_0(__PoolableManager____c__DisplayClass3_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PoolableManager____c__DisplayClass3_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PoolableManager____c__DisplayClass3_0, 0x18>, "Size mismatch!");

} // namespace end def Zenject
// Type: Zenject::PoolableManager
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11331))
// CS Name: ::Zenject::PoolableManager*
class CORDL_TYPE PoolableManager : public ::System::Object {
public:
// Declarations
using __c__DisplayClass3_0 = ::Zenject::__PoolableManager____c__DisplayClass3_0;

using __c = ::Zenject::__PoolableManager____c;

using __c__DisplayClass2_0 = ::Zenject::__PoolableManager____c__DisplayClass2_0;

using PoolableInfo = ::Zenject::__PoolableManager__PoolableInfo;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _poolables offset 0x10
 __declspec(property(get=__get__poolables, put=__set__poolables)) ::System::Collections::Generic::List_1<::Zenject::IPoolable*>*  _poolables;

/// @brief Field _isSpawned offset 0x18
 __declspec(property(get=__get__isSpawned, put=__set__isSpawned)) bool  _isSpawned;

constexpr void __set__poolables(::System::Collections::Generic::List_1<::Zenject::IPoolable*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::IPoolable*>* __get__poolables() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::IPoolable*>*> __get__poolables() const;

constexpr void __set__isSpawned(bool  value) ;

constexpr bool& __get__isSpawned() ;

constexpr bool const& __get__isSpawned() const;

static inline ::Zenject::PoolableManager* New_ctor(::System::Collections::Generic::List_1<::Zenject::IPoolable*>*  poolables, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*  priorities) ;

/// @brief Method .ctor addr 0x2f16e8c size 0x2a4 virtual false final false
inline void _ctor(::System::Collections::Generic::List_1<::Zenject::IPoolable*>*  poolables, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*  priorities) ;

/// @brief Method CreatePoolableInfo addr 0x2f17138 size 0x218 virtual false final false
inline ::Zenject::__PoolableManager__PoolableInfo CreatePoolableInfo(::Zenject::IPoolable*  poolable, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*  priorities) ;

/// @brief Method TriggerOnSpawned addr 0x2f17364 size 0x11c virtual false final false
inline void TriggerOnSpawned() ;

/// @brief Method TriggerOnDespawned addr 0x2f17480 size 0x10c virtual false final false
inline void TriggerOnDespawned() ;

/// @brief Method __zenCreate addr 0x2f1758c size 0x11c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f176a8 size 0x304 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "PoolableManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PoolableManager(PoolableManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoolableManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoolableManager(PoolableManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PoolableManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::PoolableManager, 0x20>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::PoolableManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PoolableManager*, "Zenject", "PoolableManager");
NEED_NO_BOX(::Zenject::__PoolableManager____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PoolableManager____c*, "Zenject", "PoolableManager/<>c");
NEED_NO_BOX(::Zenject::__PoolableManager____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PoolableManager____c__DisplayClass2_0*, "Zenject", "PoolableManager/<>c__DisplayClass2_0");
NEED_NO_BOX(::Zenject::__PoolableManager____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PoolableManager____c__DisplayClass3_0*, "Zenject", "PoolableManager/<>c__DisplayClass3_0");
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PoolableManager__PoolableInfo, "Zenject", "PoolableManager/PoolableInfo");
