#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PrefabResourceFactory_1)
namespace Zenject {
template<typename TParam1,typename TValue>
class IFactory_2;
}
namespace Zenject {
class IFactory;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename T>
class PrefabResourceFactory_1;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type T>
class PrefabResourceFactory_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PrefabResourceFactory_1);
// Type: Zenject::PrefabResourceFactory`1
// Type: Zenject::PrefabResourceFactory`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11105)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11105), inst: 2 })
// CS Name: ::Zenject::PrefabResourceFactory`1<T>*
class CORDL_TYPE PrefabResourceFactory_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _container offset 0x10
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

 __declspec(property(get=get_Container)) ::Zenject::DiContainer*  Container;

/// @brief Convert operator to "::Zenject::IFactory_2<::StringW,T>"
constexpr operator  ::Zenject::IFactory_2<::StringW,T>*() noexcept;

/// @brief Convert operator to "::Zenject::IFactory"
constexpr operator  ::Zenject::IFactory*() noexcept;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

/// @brief Method get_Container addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::DiContainer* get_Container() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
inline T Create(::StringW  prefabResourceName) ;

static inline ::Zenject::PrefabResourceFactory_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenFieldSetter0 addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void __zenFieldSetter0(::System::Object*  P_0, ::System::Object*  P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "PrefabResourceFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PrefabResourceFactory_1(PrefabResourceFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrefabResourceFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrefabResourceFactory_1(PrefabResourceFactory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PrefabResourceFactory_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PrefabResourceFactory_1, "Zenject", "PrefabResourceFactory`1");
