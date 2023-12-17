#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(FactoryProviderWrapper_1)
namespace Zenject {
class IFactory;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
template<typename TValue>
class IFactory_1;
}
namespace Zenject {
class IProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class FactoryProviderWrapper_1;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class FactoryProviderWrapper_1<TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryProviderWrapper_1);
// Type: Zenject::FactoryProviderWrapper`1
// Type: Zenject::FactoryProviderWrapper`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10981))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10981), inst: 2 })
// CS Name: ::Zenject::FactoryProviderWrapper`1<TContract>*
class CORDL_TYPE FactoryProviderWrapper_1<TContract> : public ::System::Object {
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

/// @brief Convert operator to "::Zenject::IFactory_1<TContract>"
constexpr operator  ::Zenject::IFactory_1<TContract>*() noexcept;

/// @brief Convert operator to "::Zenject::IFactory"
constexpr operator  ::Zenject::IFactory*() noexcept;

constexpr void __set__provider(::Zenject::IProvider*  value) ;

constexpr ::Zenject::IProvider* __get__provider() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::IProvider*> __get__provider() const;

constexpr void __set__injectContext(::Zenject::InjectContext*  value) ;

constexpr ::Zenject::InjectContext* __get__injectContext() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> __get__injectContext() const;

static inline ::Zenject::FactoryProviderWrapper_1<TContract>* New_ctor(::Zenject::IProvider*  provider, ::Zenject::InjectContext*  injectContext) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::IProvider*  provider, ::Zenject::InjectContext*  injectContext) ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final true
inline TContract Create() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "FactoryProviderWrapper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryProviderWrapper_1(FactoryProviderWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryProviderWrapper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryProviderWrapper_1(FactoryProviderWrapper_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FactoryProviderWrapper_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryProviderWrapper_1, "Zenject", "FactoryProviderWrapper`1");
