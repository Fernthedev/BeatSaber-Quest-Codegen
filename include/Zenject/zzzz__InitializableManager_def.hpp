#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InitializableManager)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class Object;
}
namespace Zenject {
class __InitializableManager____c;
}
namespace Zenject {
class __InitializableManager__InitializableInfo;
}
namespace ModestTree::Util {
template<typename T1,typename T2>
class ValuePair_2;
}
namespace Zenject {
class IInitializable;
}
namespace System {
class Type;
}
namespace Zenject {
class __InitializableManager____c__DisplayClass2_0;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
class InitializableManager;
}
namespace Zenject {
class __InitializableManager__InitializableInfo;
}
namespace Zenject {
class __InitializableManager____c;
}
namespace Zenject {
class __InitializableManager____c__DisplayClass2_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InitializableManager);
MARK_REF_PTR_T(::Zenject::__InitializableManager__InitializableInfo);
MARK_REF_PTR_T(::Zenject::__InitializableManager____c);
MARK_REF_PTR_T(::Zenject::__InitializableManager____c__DisplayClass2_0);
// Type: ::InitializableInfo
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11317))
// CS Name: ::InitializableManager::InitializableInfo*
class CORDL_TYPE __InitializableManager__InitializableInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field Initializable offset 0x10
 __declspec(property(get=__get_Initializable, put=__set_Initializable)) ::Zenject::IInitializable*  Initializable;

/// @brief Field Priority offset 0x18
 __declspec(property(get=__get_Priority, put=__set_Priority)) int32_t  Priority;

constexpr void __set_Initializable(::Zenject::IInitializable*  value) ;

constexpr ::Zenject::IInitializable* __get_Initializable() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::IInitializable*> __get_Initializable() const;

constexpr void __set_Priority(int32_t  value) ;

constexpr int32_t& __get_Priority() ;

constexpr int32_t const& __get_Priority() const;

static inline ::Zenject::__InitializableManager__InitializableInfo* New_ctor(::Zenject::IInitializable*  initializable, int32_t  priority) ;

/// @brief Method .ctor addr 0x2f13724 size 0x30 virtual false final false
inline void _ctor(::Zenject::IInitializable*  initializable, int32_t  priority) ;

/// @brief Method __zenCreate addr 0x2f140ac size 0x110 virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f141bc size 0x304 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__InitializableManager__InitializableInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InitializableManager__InitializableInfo(__InitializableManager__InitializableInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InitializableManager__InitializableInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InitializableManager__InitializableInfo(__InitializableManager__InitializableInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InitializableManager__InitializableInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__InitializableManager__InitializableInfo, 0x20>, "Size mismatch!");

} // namespace end def Zenject
// Type: ::<>c__DisplayClass2_0
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11318))
// CS Name: ::InitializableManager::<>c__DisplayClass2_0*
class CORDL_TYPE __InitializableManager____c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field initializable offset 0x10
 __declspec(property(get=__get_initializable, put=__set_initializable)) ::Zenject::IInitializable*  initializable;

constexpr void __set_initializable(::Zenject::IInitializable*  value) ;

constexpr ::Zenject::IInitializable* __get_initializable() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::IInitializable*> __get_initializable() const;

static inline ::Zenject::__InitializableManager____c__DisplayClass2_0* New_ctor() ;

/// @brief Method .ctor addr 0x2f1371c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <.ctor>b__0 addr 0x2f144c0 size 0x80 virtual false final false
inline bool __ctor_b__0(::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*  x) ;

/// @brief Method __zenCreate addr 0x2f14540 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f1459c size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__InitializableManager____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InitializableManager____c__DisplayClass2_0(__InitializableManager____c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InitializableManager____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InitializableManager____c__DisplayClass2_0(__InitializableManager____c__DisplayClass2_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InitializableManager____c__DisplayClass2_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__InitializableManager____c__DisplayClass2_0, 0x18>, "Size mismatch!");

} // namespace end def Zenject
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11319))
// CS Name: ::InitializableManager::<>c*
class CORDL_TYPE __InitializableManager____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::Zenject::__InitializableManager____c*  value) ;

static inline ::Zenject::__InitializableManager____c* getStaticF___9() ;

static inline void setStaticF___9__2_1(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*,int32_t>*  value) ;

static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*,int32_t>* getStaticF___9__2_1() ;

static inline void setStaticF___9__5_0(::System::Func_2<::Zenject::__InitializableManager__InitializableInfo*,int32_t>*  value) ;

static inline ::System::Func_2<::Zenject::__InitializableManager__InitializableInfo*,int32_t>* getStaticF___9__5_0() ;

static inline ::Zenject::__InitializableManager____c* New_ctor() ;

/// @brief Method .ctor addr 0x2f147c0 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <.ctor>b__2_1 addr 0x2f147c8 size 0x18 virtual false final false
inline int32_t __ctor_b__2_1(::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*  x) ;

/// @brief Method <Initialize>b__5_0 addr 0x2f147e0 size 0x18 virtual false final false
inline int32_t _Initialize_b__5_0(::Zenject::__InitializableManager__InitializableInfo*  x) ;

/// @brief Method __zenCreate addr 0x2f147f8 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f14854 size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__InitializableManager____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InitializableManager____c(__InitializableManager____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InitializableManager____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InitializableManager____c(__InitializableManager____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InitializableManager____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__2_1

// Static field <>9__5_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__InitializableManager____c, 0x10>, "Size mismatch!");

} // namespace end def Zenject
// Type: Zenject::InitializableManager
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11320))
// CS Name: ::Zenject::InitializableManager*
class CORDL_TYPE InitializableManager : public ::System::Object {
public:
// Declarations
using __c = ::Zenject::__InitializableManager____c;

using __c__DisplayClass2_0 = ::Zenject::__InitializableManager____c__DisplayClass2_0;

using InitializableInfo = ::Zenject::__InitializableManager__InitializableInfo;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _initializables offset 0x10
 __declspec(property(get=__get__initializables, put=__set__initializables)) ::System::Collections::Generic::List_1<::Zenject::__InitializableManager__InitializableInfo*>*  _initializables;

/// @brief Field _hasInitialized offset 0x18
 __declspec(property(get=__get__hasInitialized, put=__set__hasInitialized)) bool  _hasInitialized;

constexpr void __set__initializables(::System::Collections::Generic::List_1<::Zenject::__InitializableManager__InitializableInfo*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::__InitializableManager__InitializableInfo*>* __get__initializables() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::__InitializableManager__InitializableInfo*>*> __get__initializables() const;

constexpr void __set__hasInitialized(bool  value) ;

constexpr bool& __get__hasInitialized() ;

constexpr bool const& __get__hasInitialized() const;

static inline ::Zenject::InitializableManager* New_ctor(::System::Collections::Generic::List_1<::Zenject::IInitializable*>*  initializables, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*  priorities) ;

/// @brief Method .ctor addr 0x2f13380 size 0x39c virtual false final false
inline void _ctor(::System::Collections::Generic::List_1<::Zenject::IInitializable*>*  initializables, ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*,int32_t>*>*  priorities) ;

/// @brief Method Add addr 0x2f13754 size 0x8 virtual false final false
inline void Add(::Zenject::IInitializable*  initializable) ;

/// @brief Method Add addr 0x2f1375c size 0x104 virtual false final false
inline void Add(::Zenject::IInitializable*  initializable, int32_t  priority) ;

/// @brief Method Initialize addr 0x2f13860 size 0x42c virtual false final false
inline void Initialize() ;

/// @brief Method __zenCreate addr 0x2f13c8c size 0x11c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f13da8 size 0x304 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "InitializableManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InitializableManager(InitializableManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InitializableManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InitializableManager(InitializableManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InitializableManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InitializableManager, 0x20>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::InitializableManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InitializableManager*, "Zenject", "InitializableManager");
NEED_NO_BOX(::Zenject::__InitializableManager__InitializableInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__InitializableManager__InitializableInfo*, "Zenject", "InitializableManager/InitializableInfo");
NEED_NO_BOX(::Zenject::__InitializableManager____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__InitializableManager____c*, "Zenject", "InitializableManager/<>c");
NEED_NO_BOX(::Zenject::__InitializableManager____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__InitializableManager____c__DisplayClass2_0*, "Zenject", "InitializableManager/<>c__DisplayClass2_0");
