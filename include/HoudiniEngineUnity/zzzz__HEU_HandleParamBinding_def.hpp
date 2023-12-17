#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_HandleParamBinding)
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct __HEU_HandleParamBinding__HEU_HandleParamType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct __HEU_HandleParamBinding__HEU_HandleParamType;
}
namespace HoudiniEngineUnity {
class HEU_HandleParamBinding;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_HandleParamBinding);
// Type: ::HEU_HandleParamType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9683))
// CS Name: ::HEU_HandleParamBinding::HEU_HandleParamType
struct CORDL_TYPE __HEU_HandleParamBinding__HEU_HandleParamType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____HEU_HandleParamBinding__HEU_HandleParamType_Unwrapped
enum struct ____HEU_HandleParamBinding__HEU_HandleParamType_Unwrapped : int32_t {
__E_TRANSLATE = static_cast<int32_t>(0x0),
__E_ROTATE = static_cast<int32_t>(0x1),
__E_SCALE = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field TRANSLATE value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType const TRANSLATE;

/// @brief Field ROTATE value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType const ROTATE;

/// @brief Field SCALE value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType const SCALE;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____HEU_HandleParamBinding__HEU_HandleParamType_Unwrapped () const noexcept {
return std::bit_cast<____HEU_HandleParamBinding__HEU_HandleParamType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __HEU_HandleParamBinding__HEU_HandleParamType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HEU_HandleParamBinding__HEU_HandleParamType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HEU_HandleParamBinding__HEU_HandleParamType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_HandleParamBinding
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9684))
// CS Name: ::HoudiniEngineUnity::HEU_HandleParamBinding*
class CORDL_TYPE HEU_HandleParamBinding : public ::System::Object {
public:
// Declarations
using HEU_HandleParamType = ::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _paramType offset 0x10
 __declspec(property(get=__get__paramType, put=__set__paramType)) ::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType  _paramType;

/// @brief Field _parmID offset 0x14
 __declspec(property(get=__get__parmID, put=__set__parmID)) int32_t  _parmID;

/// @brief Field _paramName offset 0x18
 __declspec(property(get=__get__paramName, put=__set__paramName)) ::StringW  _paramName;

/// @brief Field _bDisabled offset 0x20
 __declspec(property(get=__get__bDisabled, put=__set__bDisabled)) bool  _bDisabled;

/// @brief Field _boundChannels offset 0x28
 __declspec(property(get=__get__boundChannels, put=__set__boundChannels)) ::ArrayW<bool,::Array<bool>*>  _boundChannels;

/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HandleParamBinding*>"
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HandleParamBinding*>*() noexcept;

constexpr void __set__paramType(::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType  value) ;

constexpr ::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType& __get__paramType() ;

constexpr ::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType const& __get__paramType() const;

constexpr void __set__parmID(int32_t  value) ;

constexpr int32_t& __get__parmID() ;

constexpr int32_t const& __get__parmID() const;

constexpr void __set__paramName(::StringW  value) ;

constexpr ::StringW& __get__paramName() ;

constexpr ::StringW const& __get__paramName() const;

constexpr void __set__bDisabled(bool  value) ;

constexpr bool& __get__bDisabled() ;

constexpr bool const& __get__bDisabled() const;

constexpr void __set__boundChannels(::ArrayW<bool,::Array<bool>*>  value) ;

constexpr ::ArrayW<bool,::Array<bool>*>& __get__boundChannels() ;

constexpr ::ArrayW<bool,::Array<bool>*> const& __get__boundChannels() const;

/// @brief Method IsEquivalentTo addr 0x21917d0 size 0x200 virtual true final true
inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_HandleParamBinding*  other) ;

static inline ::HoudiniEngineUnity::HEU_HandleParamBinding* New_ctor() ;

/// @brief Method .ctor addr 0x21908b0 size 0x58 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HandleParamBinding", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_HandleParamBinding(HEU_HandleParamBinding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HandleParamBinding", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_HandleParamBinding(HEU_HandleParamBinding const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_HandleParamBinding()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HandleParamBinding, 0x30>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_HandleParamBinding__HEU_HandleParamType, "HoudiniEngineUnity", "HEU_HandleParamBinding/HEU_HandleParamType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HandleParamBinding);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HandleParamBinding*, "HoudiniEngineUnity", "HEU_HandleParamBinding");
