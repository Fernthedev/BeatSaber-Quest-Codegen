#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRControllerTest)
namespace GlobalNamespace {
class __OVRControllerTest__BoolMonitor;
}
namespace GlobalNamespace {
class __OVRControllerTest____c;
}
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine::UI {
class Text;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class __OVRControllerTest__BoolMonitor__BoolGenerator;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRControllerTest;
}
namespace GlobalNamespace {
class __OVRControllerTest__BoolMonitor;
}
namespace GlobalNamespace {
class __OVRControllerTest__BoolMonitor__BoolGenerator;
}
namespace GlobalNamespace {
class __OVRControllerTest____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRControllerTest);
MARK_REF_PTR_T(::GlobalNamespace::__OVRControllerTest__BoolMonitor);
MARK_REF_PTR_T(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator);
MARK_REF_PTR_T(::GlobalNamespace::__OVRControllerTest____c);
// Type: ::BoolGenerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8081))
// CS Name: ::OVRControllerTest::BoolMonitor::BoolGenerator*
class CORDL_TYPE __OVRControllerTest__BoolMonitor__BoolGenerator : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27a6ed4 size 0xbc virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27a6f90 size 0x14 virtual true final false
inline bool Invoke() ;

/// @brief Method BeginInvoke addr 0x27a6fa4 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27a6fc4 size 0x28 virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRControllerTest__BoolMonitor__BoolGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRControllerTest__BoolMonitor__BoolGenerator(__OVRControllerTest__BoolMonitor__BoolGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRControllerTest__BoolMonitor__BoolGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRControllerTest__BoolMonitor__BoolGenerator(__OVRControllerTest__BoolMonitor__BoolGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRControllerTest__BoolMonitor__BoolGenerator()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BoolMonitor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8082))
// CS Name: ::OVRControllerTest::BoolMonitor*
class CORDL_TYPE __OVRControllerTest__BoolMonitor : public ::System::Object {
public:
// Declarations
using BoolGenerator = ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field m_name offset 0x10
 __declspec(property(get=__get_m_name, put=__set_m_name)) ::StringW  m_name;

/// @brief Field m_generator offset 0x18
 __declspec(property(get=__get_m_generator, put=__set_m_generator)) ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  m_generator;

/// @brief Field m_prevValue offset 0x20
 __declspec(property(get=__get_m_prevValue, put=__set_m_prevValue)) bool  m_prevValue;

/// @brief Field m_currentValue offset 0x21
 __declspec(property(get=__get_m_currentValue, put=__set_m_currentValue)) bool  m_currentValue;

/// @brief Field m_currentValueRecentlyChanged offset 0x22
 __declspec(property(get=__get_m_currentValueRecentlyChanged, put=__set_m_currentValueRecentlyChanged)) bool  m_currentValueRecentlyChanged;

/// @brief Field m_displayTimeout offset 0x24
 __declspec(property(get=__get_m_displayTimeout, put=__set_m_displayTimeout)) float_t  m_displayTimeout;

/// @brief Field m_displayTimer offset 0x28
 __declspec(property(get=__get_m_displayTimer, put=__set_m_displayTimer)) float_t  m_displayTimer;

constexpr void __set_m_name(::StringW  value) ;

constexpr ::StringW& __get_m_name() ;

constexpr ::StringW const& __get_m_name() const;

constexpr void __set_m_generator(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

constexpr ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __get_m_generator() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*> __get_m_generator() const;

constexpr void __set_m_prevValue(bool  value) ;

constexpr bool& __get_m_prevValue() ;

constexpr bool const& __get_m_prevValue() const;

constexpr void __set_m_currentValue(bool  value) ;

constexpr bool& __get_m_currentValue() ;

constexpr bool const& __get_m_currentValue() const;

constexpr void __set_m_currentValueRecentlyChanged(bool  value) ;

constexpr bool& __get_m_currentValueRecentlyChanged() ;

constexpr bool const& __get_m_currentValueRecentlyChanged() const;

constexpr void __set_m_displayTimeout(float_t  value) ;

constexpr float_t& __get_m_displayTimeout() ;

constexpr float_t const& __get_m_displayTimeout() const;

constexpr void __set_m_displayTimer(float_t  value) ;

constexpr float_t& __get_m_displayTimer() ;

constexpr float_t const& __get_m_displayTimer() const;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor* New_ctor(::StringW  name, ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  generator, float_t  displayTimeout) ;

/// @brief Method .ctor addr 0x27a6cf4 size 0x78 virtual false final false
inline void _ctor(::StringW  name, ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  generator, float_t  displayTimeout) ;

/// @brief Method Update addr 0x27a6d6c size 0x94 virtual false final false
inline void Update() ;

/// @brief Method AppendToStringBuilder addr 0x27a6e00 size 0xd4 virtual false final false
inline void AppendToStringBuilder(ByRef<::System::Text::StringBuilder*>  sb) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRControllerTest__BoolMonitor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRControllerTest__BoolMonitor(__OVRControllerTest__BoolMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRControllerTest__BoolMonitor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRControllerTest__BoolMonitor(__OVRControllerTest__BoolMonitor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRControllerTest__BoolMonitor()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRControllerTest__BoolMonitor, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8083))
// CS Name: ::OVRControllerTest::<>c*
class CORDL_TYPE __OVRControllerTest____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__OVRControllerTest____c*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest____c* getStaticF___9() ;

static inline void setStaticF___9__4_0(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_0() ;

static inline void setStaticF___9__4_1(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_1() ;

static inline void setStaticF___9__4_2(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_2() ;

static inline void setStaticF___9__4_3(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_3() ;

static inline void setStaticF___9__4_4(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_4() ;

static inline void setStaticF___9__4_5(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_5() ;

static inline void setStaticF___9__4_6(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_6() ;

static inline void setStaticF___9__4_7(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_7() ;

static inline void setStaticF___9__4_8(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_8() ;

static inline void setStaticF___9__4_9(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_9() ;

static inline void setStaticF___9__4_10(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_10() ;

static inline void setStaticF___9__4_11(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_11() ;

static inline void setStaticF___9__4_12(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_12() ;

static inline void setStaticF___9__4_13(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_13() ;

static inline void setStaticF___9__4_14(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_14() ;

static inline void setStaticF___9__4_15(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_15() ;

static inline void setStaticF___9__4_16(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_16() ;

static inline void setStaticF___9__4_17(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_17() ;

static inline void setStaticF___9__4_18(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_18() ;

static inline void setStaticF___9__4_19(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_19() ;

static inline void setStaticF___9__4_20(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_20() ;

static inline void setStaticF___9__4_21(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_21() ;

static inline void setStaticF___9__4_22(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_22() ;

static inline void setStaticF___9__4_23(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_23() ;

static inline void setStaticF___9__4_24(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_24() ;

static inline void setStaticF___9__4_25(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_25() ;

static inline void setStaticF___9__4_26(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_26() ;

static inline void setStaticF___9__4_27(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_27() ;

static inline void setStaticF___9__4_28(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_28() ;

static inline void setStaticF___9__4_29(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_29() ;

static inline void setStaticF___9__4_30(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_30() ;

static inline ::GlobalNamespace::__OVRControllerTest____c* New_ctor() ;

/// @brief Method .ctor addr 0x27a7050 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Start>b__4_0 addr 0x27a7058 size 0x58 virtual false final false
inline bool _Start_b__4_0() ;

/// @brief Method <Start>b__4_1 addr 0x27a70b0 size 0x58 virtual false final false
inline bool _Start_b__4_1() ;

/// @brief Method <Start>b__4_2 addr 0x27a7108 size 0x58 virtual false final false
inline bool _Start_b__4_2() ;

/// @brief Method <Start>b__4_3 addr 0x27a7160 size 0x58 virtual false final false
inline bool _Start_b__4_3() ;

/// @brief Method <Start>b__4_4 addr 0x27a71b8 size 0x58 virtual false final false
inline bool _Start_b__4_4() ;

/// @brief Method <Start>b__4_5 addr 0x27a7210 size 0x58 virtual false final false
inline bool _Start_b__4_5() ;

/// @brief Method <Start>b__4_6 addr 0x27a7268 size 0x58 virtual false final false
inline bool _Start_b__4_6() ;

/// @brief Method <Start>b__4_7 addr 0x27a72c0 size 0x58 virtual false final false
inline bool _Start_b__4_7() ;

/// @brief Method <Start>b__4_8 addr 0x27a7318 size 0x58 virtual false final false
inline bool _Start_b__4_8() ;

/// @brief Method <Start>b__4_9 addr 0x27a7370 size 0x58 virtual false final false
inline bool _Start_b__4_9() ;

/// @brief Method <Start>b__4_10 addr 0x27a73c8 size 0x58 virtual false final false
inline bool _Start_b__4_10() ;

/// @brief Method <Start>b__4_11 addr 0x27a7420 size 0x58 virtual false final false
inline bool _Start_b__4_11() ;

/// @brief Method <Start>b__4_12 addr 0x27a7478 size 0x58 virtual false final false
inline bool _Start_b__4_12() ;

/// @brief Method <Start>b__4_13 addr 0x27a74d0 size 0x58 virtual false final false
inline bool _Start_b__4_13() ;

/// @brief Method <Start>b__4_14 addr 0x27a7528 size 0x58 virtual false final false
inline bool _Start_b__4_14() ;

/// @brief Method <Start>b__4_15 addr 0x27a7580 size 0x58 virtual false final false
inline bool _Start_b__4_15() ;

/// @brief Method <Start>b__4_16 addr 0x27a75d8 size 0x58 virtual false final false
inline bool _Start_b__4_16() ;

/// @brief Method <Start>b__4_17 addr 0x27a7630 size 0x58 virtual false final false
inline bool _Start_b__4_17() ;

/// @brief Method <Start>b__4_18 addr 0x27a7688 size 0x58 virtual false final false
inline bool _Start_b__4_18() ;

/// @brief Method <Start>b__4_19 addr 0x27a76e0 size 0x58 virtual false final false
inline bool _Start_b__4_19() ;

/// @brief Method <Start>b__4_20 addr 0x27a7738 size 0x58 virtual false final false
inline bool _Start_b__4_20() ;

/// @brief Method <Start>b__4_21 addr 0x27a7790 size 0x58 virtual false final false
inline bool _Start_b__4_21() ;

/// @brief Method <Start>b__4_22 addr 0x27a77e8 size 0x58 virtual false final false
inline bool _Start_b__4_22() ;

/// @brief Method <Start>b__4_23 addr 0x27a7840 size 0x58 virtual false final false
inline bool _Start_b__4_23() ;

/// @brief Method <Start>b__4_24 addr 0x27a7898 size 0x58 virtual false final false
inline bool _Start_b__4_24() ;

/// @brief Method <Start>b__4_25 addr 0x27a78f0 size 0x58 virtual false final false
inline bool _Start_b__4_25() ;

/// @brief Method <Start>b__4_26 addr 0x27a7948 size 0x58 virtual false final false
inline bool _Start_b__4_26() ;

/// @brief Method <Start>b__4_27 addr 0x27a79a0 size 0x58 virtual false final false
inline bool _Start_b__4_27() ;

/// @brief Method <Start>b__4_28 addr 0x27a79f8 size 0x58 virtual false final false
inline bool _Start_b__4_28() ;

/// @brief Method <Start>b__4_29 addr 0x27a7a50 size 0x58 virtual false final false
inline bool _Start_b__4_29() ;

/// @brief Method <Start>b__4_30 addr 0x27a7aa8 size 0x58 virtual false final false
inline bool _Start_b__4_30() ;

/// @brief Method <.cctor>b__9_0 addr 0x27a7b00 size 0x108 virtual false final false
inline bool __cctor_b__9_0() ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRControllerTest____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRControllerTest____c(__OVRControllerTest____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRControllerTest____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRControllerTest____c(__OVRControllerTest____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRControllerTest____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__4_0

// Static field <>9__4_1

// Static field <>9__4_2

// Static field <>9__4_3

// Static field <>9__4_4

// Static field <>9__4_5

// Static field <>9__4_6

// Static field <>9__4_7

// Static field <>9__4_8

// Static field <>9__4_9

// Static field <>9__4_10

// Static field <>9__4_11

// Static field <>9__4_12

// Static field <>9__4_13

// Static field <>9__4_14

// Static field <>9__4_15

// Static field <>9__4_16

// Static field <>9__4_17

// Static field <>9__4_18

// Static field <>9__4_19

// Static field <>9__4_20

// Static field <>9__4_21

// Static field <>9__4_22

// Static field <>9__4_23

// Static field <>9__4_24

// Static field <>9__4_25

// Static field <>9__4_26

// Static field <>9__4_27

// Static field <>9__4_28

// Static field <>9__4_29

// Static field <>9__4_30


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRControllerTest____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRControllerTest
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8084))
// CS Name: ::OVRControllerTest*
class CORDL_TYPE OVRControllerTest : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::__OVRControllerTest____c;

using BoolMonitor = ::GlobalNamespace::__OVRControllerTest__BoolMonitor;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field uiText offset 0x18
 __declspec(property(get=__get_uiText, put=__set_uiText)) ::UnityEngine::UI::Text*  uiText;

/// @brief Field monitors offset 0x20
 __declspec(property(get=__get_monitors, put=__set_monitors)) ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRControllerTest__BoolMonitor*>*  monitors;

/// @brief Field data offset 0x28
 __declspec(property(get=__get_data, put=__set_data)) ::System::Text::StringBuilder*  data;

constexpr void __set_uiText(::UnityEngine::UI::Text*  value) ;

constexpr ::UnityEngine::UI::Text* __get_uiText() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> __get_uiText() const;

constexpr void __set_monitors(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRControllerTest__BoolMonitor*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRControllerTest__BoolMonitor*>* __get_monitors() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRControllerTest__BoolMonitor*>*> __get_monitors() const;

constexpr void __set_data(::System::Text::StringBuilder*  value) ;

constexpr ::System::Text::StringBuilder* __get_data() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> __get_data() const;

static inline void setStaticF_prevConnected(::StringW  value) ;

static inline ::StringW getStaticF_prevConnected() ;

static inline void setStaticF_controllers(::GlobalNamespace::__OVRControllerTest__BoolMonitor*  value) ;

static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor* getStaticF_controllers() ;

/// @brief Method Start addr 0x27a30e8 size 0x21f8 virtual false final false
inline void Start() ;

/// @brief Method Update addr 0x27a52e0 size 0x8d0 virtual false final false
inline void Update() ;

static inline ::GlobalNamespace::OVRControllerTest* New_ctor() ;

/// @brief Method .ctor addr 0x27a5bb0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerTest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRControllerTest(OVRControllerTest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerTest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRControllerTest(OVRControllerTest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRControllerTest()  = default;
public:


// Fields

// Static field prevConnected

// Static field controllers


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRControllerTest, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRControllerTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRControllerTest*, "", "OVRControllerTest");
NEED_NO_BOX(::GlobalNamespace::__OVRControllerTest__BoolMonitor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRControllerTest__BoolMonitor*, "", "OVRControllerTest/BoolMonitor");
NEED_NO_BOX(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*, "", "OVRControllerTest/BoolMonitor/BoolGenerator");
NEED_NO_BOX(::GlobalNamespace::__OVRControllerTest____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRControllerTest____c*, "", "OVRControllerTest/<>c");
