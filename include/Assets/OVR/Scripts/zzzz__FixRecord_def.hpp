#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Assets/OVR/Scripts/zzzz__Record_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixRecord)
namespace Assets::OVR::Scripts {
class FixMethodDelegate;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Assets::OVR::Scripts {
class FixRecord;
}
// Write type traits
MARK_REF_PTR_T(::Assets::OVR::Scripts::FixRecord);
// Type: Assets.OVR.Scripts::FixRecord
namespace Assets::OVR::Scripts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8734))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8737))
// CS Name: ::Assets.OVR.Scripts::FixRecord*
class CORDL_TYPE FixRecord : public ::Assets::OVR::Scripts::Record {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::Assets::OVR::Scripts::Record)]{};

/// @brief Field fixMethod offset 0x28
 __declspec(property(get=__get_fixMethod, put=__set_fixMethod)) ::Assets::OVR::Scripts::FixMethodDelegate*  fixMethod;

/// @brief Field targetObject offset 0x30
 __declspec(property(get=__get_targetObject, put=__set_targetObject)) ::UnityEngine::Object*  targetObject;

/// @brief Field buttonNames offset 0x38
 __declspec(property(get=__get_buttonNames, put=__set_buttonNames)) ::ArrayW<::StringW,::Array<::StringW>*>  buttonNames;

/// @brief Field editModeRequired offset 0x40
 __declspec(property(get=__get_editModeRequired, put=__set_editModeRequired)) bool  editModeRequired;

/// @brief Field complete offset 0x41
 __declspec(property(get=__get_complete, put=__set_complete)) bool  complete;

constexpr void __set_fixMethod(::Assets::OVR::Scripts::FixMethodDelegate*  value) ;

constexpr ::Assets::OVR::Scripts::FixMethodDelegate* __get_fixMethod() ;

constexpr ::cordl_internals::to_const_pointer<::Assets::OVR::Scripts::FixMethodDelegate*> __get_fixMethod() const;

constexpr void __set_targetObject(::UnityEngine::Object*  value) ;

constexpr ::UnityEngine::Object* __get_targetObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> __get_targetObject() const;

constexpr void __set_buttonNames(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_buttonNames() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_buttonNames() const;

constexpr void __set_editModeRequired(bool  value) ;

constexpr bool& __get_editModeRequired() ;

constexpr bool const& __get_editModeRequired() const;

constexpr void __set_complete(bool  value) ;

constexpr bool& __get_complete() ;

constexpr bool const& __get_complete() const;

static inline ::Assets::OVR::Scripts::FixRecord* New_ctor(int32_t  order, ::StringW  cat, ::StringW  msg, ::Assets::OVR::Scripts::FixMethodDelegate*  fix, ::UnityEngine::Object*  target, bool  editRequired, ::ArrayW<::StringW,::Array<::StringW>*>  buttons) ;

/// @brief Method .ctor addr 0x27f874c size 0x6c virtual false final false
inline void _ctor(int32_t  order, ::StringW  cat, ::StringW  msg, ::Assets::OVR::Scripts::FixMethodDelegate*  fix, ::UnityEngine::Object*  target, bool  editRequired, ::ArrayW<::StringW,::Array<::StringW>*>  buttons) ;

// Ctor Parameters [CppParam { name: "", ty: "FixRecord", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FixRecord(FixRecord && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixRecord", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixRecord(FixRecord const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FixRecord()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Assets::OVR::Scripts::FixRecord, 0x48>, "Size mismatch!");

} // namespace end def Assets::OVR::Scripts
NEED_NO_BOX(::Assets::OVR::Scripts::FixRecord);
DEFINE_IL2CPP_ARG_TYPE(::Assets::OVR::Scripts::FixRecord*, "Assets.OVR.Scripts", "FixRecord");
