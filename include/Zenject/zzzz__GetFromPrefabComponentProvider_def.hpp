#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(GetFromPrefabComponentProvider)
namespace Zenject {
class InjectContext;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class IPrefabInstantiator;
}
namespace System {
class Action;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class GetFromPrefabComponentProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::GetFromPrefabComponentProvider);
// Type: Zenject::GetFromPrefabComponentProvider
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11189))
// CS Name: ::Zenject::GetFromPrefabComponentProvider*
class CORDL_TYPE GetFromPrefabComponentProvider : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _prefabInstantiator offset 0x10
 __declspec(property(get=__get__prefabInstantiator, put=__set__prefabInstantiator)) ::Zenject::IPrefabInstantiator*  _prefabInstantiator;

/// @brief Field _componentType offset 0x18
 __declspec(property(get=__get__componentType, put=__set__componentType)) ::System::Type*  _componentType;

/// @brief Field _matchSingle offset 0x20
 __declspec(property(get=__get__matchSingle, put=__set__matchSingle)) bool  _matchSingle;

 __declspec(property(get=get_IsCached)) bool  IsCached;

 __declspec(property(get=get_TypeVariesBasedOnMemberType)) bool  TypeVariesBasedOnMemberType;

/// @brief Convert operator to "::Zenject::IProvider"
constexpr operator  ::Zenject::IProvider*() noexcept;

constexpr void __set__prefabInstantiator(::Zenject::IPrefabInstantiator*  value) ;

constexpr ::Zenject::IPrefabInstantiator* __get__prefabInstantiator() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::IPrefabInstantiator*> __get__prefabInstantiator() const;

constexpr void __set__componentType(::System::Type*  value) ;

constexpr ::System::Type* __get__componentType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__componentType() const;

constexpr void __set__matchSingle(bool  value) ;

constexpr bool& __get__matchSingle() ;

constexpr bool const& __get__matchSingle() const;

static inline ::Zenject::GetFromPrefabComponentProvider* New_ctor(::System::Type*  componentType, ::Zenject::IPrefabInstantiator*  prefabInstantiator, bool  matchSingle) ;

/// @brief Method .ctor addr 0x2f070e4 size 0x3c virtual false final false
inline void _ctor(::System::Type*  componentType, ::Zenject::IPrefabInstantiator*  prefabInstantiator, bool  matchSingle) ;

/// @brief Method get_IsCached addr 0x2f07120 size 0x8 virtual true final true
inline bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2f07128 size 0x8 virtual true final true
inline bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x2f07130 size 0x8 virtual true final true
inline ::System::Type* GetInstanceType(::Zenject::InjectContext*  context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2f07138 size 0x304 virtual true final true
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "GetFromPrefabComponentProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GetFromPrefabComponentProvider(GetFromPrefabComponentProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetFromPrefabComponentProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetFromPrefabComponentProvider(GetFromPrefabComponentProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GetFromPrefabComponentProvider()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::GetFromPrefabComponentProvider, 0x28>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::GetFromPrefabComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::GetFromPrefabComponentProvider*, "Zenject", "GetFromPrefabComponentProvider");
