#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LazyInject_1)
namespace Zenject {
class IValidatable;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
template<typename T>
class LazyInject_1;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type T>
class LazyInject_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::LazyInject_1);
// Type: Zenject::LazyInject`1
// Type: Zenject::LazyInject`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11117))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11117), inst: 2 })
// CS Name: ::Zenject::LazyInject`1<T>*
class CORDL_TYPE LazyInject_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _container offset 0x10
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _context offset 0x18
 __declspec(property(get=__get__context, put=__set__context)) ::Zenject::InjectContext*  _context;

/// @brief Field _hasValue offset 0x20
 __declspec(property(get=__get__hasValue, put=__set__hasValue)) bool  _hasValue;

/// @brief Field _value offset 0x28
 __declspec(property(get=__get__value, put=__set__value)) T  _value;

 __declspec(property(get=get_Value)) T  Value;

/// @brief Convert operator to "::Zenject::IValidatable"
constexpr operator  ::Zenject::IValidatable*() noexcept;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set__context(::Zenject::InjectContext*  value) ;

constexpr ::Zenject::InjectContext* __get__context() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> __get__context() const;

constexpr void __set__hasValue(bool  value) ;

constexpr bool& __get__hasValue() ;

constexpr bool const& __get__hasValue() const;

constexpr void __set__value(T  value) ;

constexpr T& __get__value() ;

constexpr T const& __get__value() const;

static inline ::Zenject::LazyInject_1<T>* New_ctor(::Zenject::DiContainer*  container, ::Zenject::InjectContext*  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::InjectContext*  context) ;

/// @brief Method Zenject.IValidatable.Validate addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Zenject_IValidatable_Validate() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "LazyInject_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LazyInject_1(LazyInject_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LazyInject_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LazyInject_1(LazyInject_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LazyInject_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::LazyInject_1, "Zenject", "LazyInject`1");
