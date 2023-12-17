#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NativeClassAttribute)
// Forward declare root types
namespace UnityEngine {
class NativeClassAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::NativeClassAttribute);
// Type: UnityEngine::NativeClassAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16008))
// CS Name: ::UnityEngine::NativeClassAttribute*
class CORDL_TYPE NativeClassAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Attribute)]{};

/// @brief Field <QualifiedNativeName>k__BackingField offset 0x10
 __declspec(property(get=__get__QualifiedNativeName_k__BackingField, put=__set__QualifiedNativeName_k__BackingField)) ::StringW  _QualifiedNativeName_k__BackingField;

/// @brief Field <Declaration>k__BackingField offset 0x18
 __declspec(property(get=__get__Declaration_k__BackingField, put=__set__Declaration_k__BackingField)) ::StringW  _Declaration_k__BackingField;

 __declspec(property(put=set_QualifiedNativeName)) ::StringW  QualifiedNativeName;

 __declspec(property(put=set_Declaration)) ::StringW  Declaration;

constexpr void __set__QualifiedNativeName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__QualifiedNativeName_k__BackingField() ;

constexpr ::StringW const& __get__QualifiedNativeName_k__BackingField() const;

constexpr void __set__Declaration_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Declaration_k__BackingField() ;

constexpr ::StringW const& __get__Declaration_k__BackingField() const;

/// @brief Method set_QualifiedNativeName addr 0x2d18060 size 0x8 virtual false final false
inline void set_QualifiedNativeName(::StringW  value) ;

/// @brief Method set_Declaration addr 0x2d18068 size 0x8 virtual false final false
inline void set_Declaration(::StringW  value) ;

static inline ::UnityEngine::NativeClassAttribute* New_ctor(::StringW  qualifiedCppName) ;

/// @brief Method .ctor addr 0x2d18070 size 0x70 virtual false final false
inline void _ctor(::StringW  qualifiedCppName) ;

static inline ::UnityEngine::NativeClassAttribute* New_ctor(::StringW  qualifiedCppName, ::StringW  declaration) ;

/// @brief Method .ctor addr 0x2d180e0 size 0x2c virtual false final false
inline void _ctor(::StringW  qualifiedCppName, ::StringW  declaration) ;

// Ctor Parameters [CppParam { name: "", ty: "NativeClassAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeClassAttribute(NativeClassAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeClassAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeClassAttribute(NativeClassAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NativeClassAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::NativeClassAttribute, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::NativeClassAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::NativeClassAttribute*, "UnityEngine", "NativeClassAttribute");
