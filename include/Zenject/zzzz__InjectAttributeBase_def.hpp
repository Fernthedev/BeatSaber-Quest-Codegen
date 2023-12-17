#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/Internal/zzzz__PreserveAttribute_def.hpp"
CORDL_MODULE_EXPORT(InjectAttributeBase)
namespace System {
class Object;
}
namespace Zenject {
struct InjectSources;
}
// Forward declare root types
namespace Zenject {
class InjectAttributeBase;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InjectAttributeBase);
// Type: Zenject::InjectAttributeBase
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15707))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15708))
// CS Name: ::Zenject::InjectAttributeBase*
class CORDL_TYPE InjectAttributeBase : public ::Zenject::Internal::PreserveAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::Internal::PreserveAttribute)]{};

/// @brief Field <Optional>k__BackingField offset 0x10
 __declspec(property(get=__get__Optional_k__BackingField, put=__set__Optional_k__BackingField)) bool  _Optional_k__BackingField;

/// @brief Field <Id>k__BackingField offset 0x18
 __declspec(property(get=__get__Id_k__BackingField, put=__set__Id_k__BackingField)) ::System::Object*  _Id_k__BackingField;

/// @brief Field <Source>k__BackingField offset 0x20
 __declspec(property(get=__get__Source_k__BackingField, put=__set__Source_k__BackingField)) ::Zenject::InjectSources  _Source_k__BackingField;

 __declspec(property(get=get_Optional, put=set_Optional)) bool  Optional;

 __declspec(property(get=get_Id, put=set_Id)) ::System::Object*  Id;

 __declspec(property(get=get_Source, put=set_Source)) ::Zenject::InjectSources  Source;

constexpr void __set__Optional_k__BackingField(bool  value) ;

constexpr bool& __get__Optional_k__BackingField() ;

constexpr bool const& __get__Optional_k__BackingField() const;

constexpr void __set__Id_k__BackingField(::System::Object*  value) ;

constexpr ::System::Object* __get__Id_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__Id_k__BackingField() const;

constexpr void __set__Source_k__BackingField(::Zenject::InjectSources  value) ;

constexpr ::Zenject::InjectSources& __get__Source_k__BackingField() ;

constexpr ::Zenject::InjectSources const& __get__Source_k__BackingField() const;

/// @brief Method get_Optional addr 0x2eb97b0 size 0x8 virtual false final false
inline bool get_Optional() ;

/// @brief Method set_Optional addr 0x2eb97b8 size 0xc virtual false final false
inline void set_Optional(bool  value) ;

/// @brief Method get_Id addr 0x2eb97c4 size 0x8 virtual false final false
inline ::System::Object* get_Id() ;

/// @brief Method set_Id addr 0x2eb97cc size 0x8 virtual false final false
inline void set_Id(::System::Object*  value) ;

/// @brief Method get_Source addr 0x2eb97d4 size 0x8 virtual false final false
inline ::Zenject::InjectSources get_Source() ;

/// @brief Method set_Source addr 0x2eb97dc size 0x8 virtual false final false
inline void set_Source(::Zenject::InjectSources  value) ;

static inline ::Zenject::InjectAttributeBase* New_ctor() ;

/// @brief Method .ctor addr 0x2eb97e4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InjectAttributeBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InjectAttributeBase(InjectAttributeBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InjectAttributeBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InjectAttributeBase(InjectAttributeBase const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InjectAttributeBase()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InjectAttributeBase, 0x28>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::InjectAttributeBase);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectAttributeBase*, "Zenject", "InjectAttributeBase");
