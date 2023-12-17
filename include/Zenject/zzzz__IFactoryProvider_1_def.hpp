#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__IFactoryProviderBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IFactoryProvider_1)
namespace System {
class Object;
}
namespace Zenject {
struct TypeValuePair;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__OverrideConfig;
}
namespace System {
struct Guid;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class IFactoryProvider_1;
}
namespace Zenject {
template<>
class IFactoryProvider_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>;
}
namespace Zenject {
template<::cordl_internals::is_or_is_backed_by<int32_t> TContract>
class IFactoryProvider_1<TContract>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class IFactoryProvider_1<TContract>;
}
namespace Zenject {
template<>
class IFactoryProvider_1<float_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IFactoryProvider_1);
// Type: Zenject::IFactoryProvider`1
// Type: Zenject::IFactoryProvider`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11195)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11194), inst: 3458 }), TypeDefinitionIndex(TypeDefinitionIndex(11194))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11195), inst: 6140 })
// CS Name: ::Zenject::IFactoryProvider`1<TContract>*
class CORDL_TYPE IFactoryProvider_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>> : public ::Zenject::IFactoryProviderBase_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::IFactoryProviderBase_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>)]{};

static inline ::Zenject::IFactoryProvider_1<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>* New_ctor(::Zenject::DiContainer*  container, ::System::Guid  factoryId) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::System::Guid  factoryId) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IFactoryProvider_1(IFactoryProvider_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFactoryProvider_1(IFactoryProvider_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IFactoryProvider_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::IFactoryProvider`1
namespace Zenject {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11195)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11194), inst: 3458 }), TypeDefinitionIndex(TypeDefinitionIndex(11194))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11195), inst: 974 })
// CS Name: ::Zenject::IFactoryProvider`1<TContract>*
class CORDL_TYPE IFactoryProvider_1<TContract> : public ::Zenject::IFactoryProviderBase_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::IFactoryProviderBase_1<TContract>)]{};

static inline ::Zenject::IFactoryProvider_1<TContract>* New_ctor(::Zenject::DiContainer*  container, ::System::Guid  factoryId) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::System::Guid  factoryId) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IFactoryProvider_1(IFactoryProvider_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFactoryProvider_1(IFactoryProvider_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IFactoryProvider_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::IFactoryProvider`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11194), inst: 3458 }), TypeDefinitionIndex(TypeDefinitionIndex(11194)), TypeDefinitionIndex(TypeDefinitionIndex(11195))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11195), inst: 391 })
// CS Name: ::Zenject::IFactoryProvider`1<TContract>*
class CORDL_TYPE IFactoryProvider_1<float_t> : public ::Zenject::IFactoryProviderBase_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::IFactoryProviderBase_1<float_t>)]{};

static inline ::Zenject::IFactoryProvider_1<float_t>* New_ctor(::Zenject::DiContainer*  container, ::System::Guid  factoryId) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::System::Guid  factoryId) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IFactoryProvider_1(IFactoryProvider_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFactoryProvider_1(IFactoryProvider_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IFactoryProvider_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::IFactoryProvider`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11194)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11194), inst: 3458 }), TypeDefinitionIndex(TypeDefinitionIndex(11195))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11195), inst: 2 })
// CS Name: ::Zenject::IFactoryProvider`1<TContract>*
class CORDL_TYPE IFactoryProvider_1<TContract> : public ::Zenject::IFactoryProviderBase_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::IFactoryProviderBase_1<TContract>)]{};

static inline ::Zenject::IFactoryProvider_1<TContract>* New_ctor(::Zenject::DiContainer*  container, ::System::Guid  factoryId) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::System::Guid  factoryId) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IFactoryProvider_1(IFactoryProvider_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFactoryProvider_1(IFactoryProvider_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IFactoryProvider_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IFactoryProvider_1, "Zenject", "IFactoryProvider`1");
