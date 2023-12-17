#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(InstantiateCallbackConditionCopyNonLazyBinder)
namespace System {
class Object;
}
namespace Zenject {
template<typename T>
class __InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1;
}
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename T>
class __InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1;
}
namespace Zenject {
class InstantiateCallbackConditionCopyNonLazyBinder;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type T>
class __InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1);
MARK_REF_PTR_T(::Zenject::InstantiateCallbackConditionCopyNonLazyBinder);
// Type: ::<>c__DisplayClass2_0`1
// Type: Zenject::InstantiateCallbackConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10681))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10924))
// CS Name: ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*
class CORDL_TYPE InstantiateCallbackConditionCopyNonLazyBinder : public ::Zenject::ConditionCopyNonLazyBinder {
public:
// Declarations
template<typename T>
using __c__DisplayClass2_0_1 = ::Zenject::__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Zenject::ConditionCopyNonLazyBinder)]{};

static inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* New_ctor(::Zenject::BindInfo*  bindInfo) ;

/// @brief Method .ctor addr 0x2edb1f0 size 0x8 virtual false final false
inline void _ctor(::Zenject::BindInfo*  bindInfo) ;

/// @brief Method OnInstantiated addr 0x2edb1f8 size 0x1c virtual false final false
inline ::Zenject::ConditionCopyNonLazyBinder* OnInstantiated(::System::Action_2<::Zenject::InjectContext*,::System::Object*>*  callback) ;

/// @brief Method OnInstantiated addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline ::Zenject::ConditionCopyNonLazyBinder* OnInstantiated(::System::Action_2<::Zenject::InjectContext*,T>*  callback) ;

// Ctor Parameters [CppParam { name: "", ty: "InstantiateCallbackConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstantiateCallbackConditionCopyNonLazyBinder(InstantiateCallbackConditionCopyNonLazyBinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstantiateCallbackConditionCopyNonLazyBinder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstantiateCallbackConditionCopyNonLazyBinder(InstantiateCallbackConditionCopyNonLazyBinder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InstantiateCallbackConditionCopyNonLazyBinder()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder, 0x20>, "Size mismatch!");

} // namespace end def Zenject
// Type: ::<>c__DisplayClass2_0`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10923))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10923), inst: 2 })
// CS Name: ::InstantiateCallbackConditionCopyNonLazyBinder::<>c__DisplayClass2_0`1<T>*
class CORDL_TYPE __InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field callback offset 0x10
 __declspec(property(get=__get_callback, put=__set_callback)) ::System::Action_2<::Zenject::InjectContext*,T>*  callback;

constexpr void __set_callback(::System::Action_2<::Zenject::InjectContext*,T>*  value) ;

constexpr ::System::Action_2<::Zenject::InjectContext*,T>* __get_callback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::Zenject::InjectContext*,T>*> __get_callback() const;

static inline ::Zenject::__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <OnInstantiated>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _OnInstantiated_b__0(::Zenject::InjectContext*  ctx, ::System::Object*  obj) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1(__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1(__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1, "Zenject", "InstantiateCallbackConditionCopyNonLazyBinder/<>c__DisplayClass2_0`1");
NEED_NO_BOX(::Zenject::InstantiateCallbackConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*, "Zenject", "InstantiateCallbackConditionCopyNonLazyBinder");
