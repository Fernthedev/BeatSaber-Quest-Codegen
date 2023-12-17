#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(PrefabGameObjectProvider)
namespace Zenject {
class IPrefabInstantiator;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class IProvider;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Zenject {
class PrefabGameObjectProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PrefabGameObjectProvider);
// Type: Zenject::PrefabGameObjectProvider
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11192))
// CS Name: ::Zenject::PrefabGameObjectProvider*
class CORDL_TYPE PrefabGameObjectProvider : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _prefabCreator offset 0x10
 __declspec(property(get=__get__prefabCreator, put=__set__prefabCreator)) ::Zenject::IPrefabInstantiator*  _prefabCreator;

 __declspec(property(get=get_IsCached)) bool  IsCached;

 __declspec(property(get=get_TypeVariesBasedOnMemberType)) bool  TypeVariesBasedOnMemberType;

/// @brief Convert operator to "::Zenject::IProvider"
constexpr operator  ::Zenject::IProvider*() noexcept;

constexpr void __set__prefabCreator(::Zenject::IPrefabInstantiator*  value) ;

constexpr ::Zenject::IPrefabInstantiator* __get__prefabCreator() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::IPrefabInstantiator*> __get__prefabCreator() const;

static inline ::Zenject::PrefabGameObjectProvider* New_ctor(::Zenject::IPrefabInstantiator*  prefabCreator) ;

/// @brief Method .ctor addr 0x2f0779c size 0x28 virtual false final false
inline void _ctor(::Zenject::IPrefabInstantiator*  prefabCreator) ;

/// @brief Method get_IsCached addr 0x2f077c4 size 0x8 virtual true final true
inline bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2f077cc size 0x8 virtual true final true
inline bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x2f077d4 size 0x6c virtual true final true
inline ::System::Type* GetInstanceType(::Zenject::InjectContext*  context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2f07840 size 0x150 virtual true final true
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "PrefabGameObjectProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PrefabGameObjectProvider(PrefabGameObjectProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrefabGameObjectProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrefabGameObjectProvider(PrefabGameObjectProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PrefabGameObjectProvider()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::PrefabGameObjectProvider, 0x18>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::PrefabGameObjectProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabGameObjectProvider*, "Zenject", "PrefabGameObjectProvider");
