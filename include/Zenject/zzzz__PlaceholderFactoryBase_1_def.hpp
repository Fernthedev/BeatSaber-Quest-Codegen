#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PlaceholderFactoryBase_1)
namespace System {
class Type;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class IPlaceholderFactory;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class InjectContext;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class IProvider;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
class IValidatable;
}
// Forward declare root types
namespace Zenject {
template<typename TValue>
class PlaceholderFactoryBase_1;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TValue>
class PlaceholderFactoryBase_1<TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PlaceholderFactoryBase_1);
// Type: Zenject::PlaceholderFactoryBase`1
// Type: Zenject::PlaceholderFactoryBase`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11026)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11026), inst: 2 })
// CS Name: ::Zenject::PlaceholderFactoryBase`1<TValue>*
class CORDL_TYPE PlaceholderFactoryBase_1<TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _provider offset 0x10
 __declspec(property(get=__get__provider, put=__set__provider)) ::Zenject::IProvider*  _provider;

/// @brief Field _injectContext offset 0x18
 __declspec(property(get=__get__injectContext, put=__set__injectContext)) ::Zenject::InjectContext*  _injectContext;

 __declspec(property(get=get_ParamTypes)) ::System::Collections::Generic::IEnumerable_1<::System::Type*>*  ParamTypes;

/// @brief Convert operator to "::Zenject::IPlaceholderFactory"
constexpr operator  ::Zenject::IPlaceholderFactory*() noexcept;

/// @brief Convert operator to "::Zenject::IValidatable"
constexpr operator  ::Zenject::IValidatable*() noexcept;

constexpr void __set__provider(::Zenject::IProvider*  value) ;

constexpr ::Zenject::IProvider* __get__provider() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::IProvider*> __get__provider() const;

constexpr void __set__injectContext(::Zenject::InjectContext*  value) ;

constexpr ::Zenject::InjectContext* __get__injectContext() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> __get__injectContext() const;

/// @brief Method Construct addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Construct(::Zenject::IProvider*  provider, ::Zenject::InjectContext*  injectContext) ;

/// @brief Method CreateInternal addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue CreateInternal(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  extraArgs) ;

/// @brief Method Validate addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Validate() ;

/// @brief Method get_ParamTypes addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_ParamTypes() ;

static inline ::Zenject::PlaceholderFactoryBase_1<TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method __zenInjectMethod0 addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void __zenInjectMethod0(::System::Object*  P_0, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "PlaceholderFactoryBase_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlaceholderFactoryBase_1(PlaceholderFactoryBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlaceholderFactoryBase_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlaceholderFactoryBase_1(PlaceholderFactoryBase_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlaceholderFactoryBase_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PlaceholderFactoryBase_1, "Zenject", "PlaceholderFactoryBase`1");
